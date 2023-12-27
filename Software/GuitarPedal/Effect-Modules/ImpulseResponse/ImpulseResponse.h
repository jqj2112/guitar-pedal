//
//  ImpulseResponse.h
//  NeuralAmpModeler-macOS
//
//  Created by Steven Atkinson on 12/30/22.
//
// Impulse response processing

#pragma once

#include <filesystem>

#include <Eigen/Dense>

#include "dsp.h"
#include "wav.h"

namespace dsp
{
class ImpulseResponse : public History
{
public:
  struct IRData;
  ImpulseResponse(const char* fileName, const float sampleRate);
  ImpulseResponse(const IRData& irData, const float sampleRate);
  float** Process(float** inputs, const size_t numChannels, const size_t numFrames) override;
  IRData GetData();
  float GetSampleRate() const { return mSampleRate; };
  // TODO states for the IR class
  dsp::wav::LoadReturnCode GetWavState() const { return this->mWavState; };

private:
  // Set the weights, given that the plugin is running at the provided sample
  // rate.
  void _SetWeights();

  // State of audio
  dsp::wav::LoadReturnCode mWavState;
  // Keep a copy of the raw audio that was loaded so that it can be resampled
  std::vector<float> mRawAudio;
  float mRawAudioSampleRate;
  // Resampled to the required sample rate.
  std::vector<float> mResampled;
  float mSampleRate;

  const size_t mMaxLength = 8192;
  // The weights
  Eigen::VectorXf mWeight;
};

struct dsp::ImpulseResponse::IRData
{
  std::vector<float> mRawAudio;
  float mRawAudioSampleRate;
};

}; // namespace dsp

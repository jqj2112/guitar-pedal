  /*
  else if (architecture == "WaveNet")
  {
    std::vector<wavenet::LayerArrayParams> layer_array_params;
    for (size_t i = 0; i < config["layers"].size(); i++)
    {
      nlohmann::json layer_config = config["layers"][i];
      std::vector<int> dilations;
      for (size_t j = 0; j < layer_config["dilations"].size(); j++)
        dilations.push_back(layer_config["dilations"][j]);
      layer_array_params.push_back(
        wavenet::LayerArrayParams(layer_config["input_size"], layer_config["condition_size"], layer_config["head_size"],
                                  layer_config["channels"], layer_config["kernel_size"], dilations,
                                  layer_config["activation"], layer_config["gated"], layer_config["head_bias"]));
    }
    const bool with_head = config["head"] == NULL;
    const float head_scale = config["head_scale"];
    out = std::make_unique<wavenet::WaveNet>(layer_array_params, head_scale, with_head, weights, expectedSampleRate);
  }
  */

struct namData {
    std::vector<float> weights; 
 // std::vector<int> dilations;
  //std::vector<wavenet::LayerArrayParams> layer_array_params;
    bool with_head;
    float head_scale;

    std::vector<int> dilations;
    //int dilations[7] =  {1,2,4,8,16,32,64};
    int input_size;
    int condition_size;
    int head_size;
    int channels;
    int kernel_size;
    std::string activation;
    bool gated;
    bool head_bias;

    std::vector<int> dilations2;
    //int dilations2[13] = {128,256,512,1,2,4,8,16,32,64,128,256,512};
    int input_size2;
    int condition_size2;
    int head_size2;
    int channels2;
    int kernel_size2;
    std::string activation2;
    bool gated2;
    bool head_bias2;
};


// ADD YOUR MODEL IDENTIFIER HERE ////////////////////////////////// < -------------------
namData nam1; 



/////////////////////////////////////////////////////////////////

std::vector<namData> nam_collection;

/*========================================================================*/

void setupNamWeights() {

// COPY AND PASTE YOUR MODEL WEIGHTS BELOW (After converting .json to .h file) ////////////////////////////////// < -------------------
//   ADD AND REMOVE MODELS AS DESIRED 


//========================================================================
//  Klone at gain8 tone7 output5; nano model size

  nam1.weights = {-0.24409976601600647, 0.7134197950363159, -0.9017247557640076, -0.7203115224838257, 0.0561370849609375, 0.2008979767560959, 0.22827918827533722, 0.05465248227119446, -0.15476389229297638, -0.1692293882369995, 0.07213475555181503, 0.0568896159529686, -0.04746861755847931, -0.02843468450009823, -0.001520202960819006, 0.2447994351387024, 0.17206910252571106, 0.278490275144577, -0.43560540676116943, -0.20080415904521942, -0.022275332361459732, 0.42826375365257263, 0.012944089248776436, 0.34348195791244507, -0.2339160442352295, 0.09873680770397186, 0.37738338112831116, -0.45047569274902344, 0.0076106819324195385, 0.12494854629039764, -0.3655701279640198, 0.03568993881344795, -0.40600907802581787, 0.09569738805294037, 0.02015557512640953, -0.04343307018280029, -0.38991159200668335, 0.45169827342033386, 0.3356688916683197, -0.07505736500024796, -0.09500791877508163, -0.18142472207546234, -0.25641247630119324, -0.19794709980487823, -0.21374842524528503, 0.08478445559740067, 0.1231759563088417, 0.18898706138134003, -0.3563278913497925, -0.06915690749883652, 0.19770091772079468, 0.08346441388130188, -0.12123749405145645, 0.022889653220772743, 0.3209916353225708, -0.18135188519954681, -0.048659179359674454, -0.601319432258606, -0.47910693287849426, -0.30940937995910645, 0.25728103518486023, 0.6544954776763916, -0.05244176834821701, 0.4210069477558136, 0.08053469657897949, -0.27435579895973206, -0.10077036172151566, -0.08005616813898087, 0.4210352897644043, 0.3956679105758667, -0.35348182916641235, -0.19904564321041107, 0.018417678773403168, 0.5000695586204529, 0.4812115728855133, 0.4834511876106262, 0.11033221334218979, -0.3236991763114929, 0.03227929025888443, -0.2840077877044678, 0.28658729791641235, 0.4578094184398651, -0.049280960112810135, -0.43072181940078735, -0.013685685582458973, -0.011505565606057644, -0.03479539975523949, -0.07933510839939117, -0.11181934177875519, 0.19183707237243652, 0.217659130692482, -0.04407596215605736, 0.23192095756530762, -0.09525328874588013, -0.10845279693603516, -0.1771300733089447, 0.20624656975269318, 0.14575731754302979, 0.07642118632793427, -0.0250256285071373, 0.4300548732280731, 0.0626448541879654, -0.37362033128738403, -0.13332250714302063, -0.35194501280784607, -0.18270353972911835, -0.1982320249080658, -0.15157005190849304, 0.08647378534078598, 0.1436837762594223, -0.19027483463287354, 0.09752113372087479, -0.2990496754646301, 0.10834532231092453, -0.02796633541584015, -0.3519623279571533, -0.32316815853118896, -0.46440374851226807, 0.36950623989105225, 0.17804192006587982, 0.25834405422210693, -0.018871575593948364, -0.08085775375366211, 0.06899845600128174, 0.07384863495826721, -0.29583701491355896, -0.2663279175758362, 0.21000315248966217, -0.044114891439676285, -0.19955796003341675, -0.043662723153829575, -0.034761279821395874, -0.33371007442474365, 0.26068663597106934, 0.969424307346344, -0.29121291637420654, 0.42427945137023926, -0.44613632559776306, 0.0970459058880806, -0.4695647954940796, 0.48026689887046814, 0.3448057472705841, 0.6109098792076111, -0.2829156517982483, -0.5582787394523621, -0.11961998790502548, 0.45927664637565613, 0.21050605177879333, -0.04702017083764076, -0.5694074034690857, -0.4039120078086853, -0.9652975797653198, -0.12659889459609985, 0.36605286598205566, 0.2279493808746338, -0.4709640443325043, 0.27541282773017883, -0.41551345586776733, 0.03639500215649605, -0.08867993205785751, 0.1773047298192978, -0.2586567997932434, -0.45016562938690186, -0.39099547266960144, 0.10112836956977844, 0.06975622475147247, -0.3341046869754791, 0.14270620048046112, -0.5317820906639099, -0.06346254050731659, 0.3382262587547302, -0.2576647400856018, -0.28640320897102356, 0.05691048875451088, -0.03786284103989601, -0.013480901718139648, -0.7805403470993042, -0.36611607670783997, 0.25576186180114746, -0.14462968707084656, -0.3600468337535858, -0.27052226662635803, 0.42337512969970703, 0.05724393576383591, -0.21068061888217926, -0.7367510795593262, 0.24026335775852203, 0.2029874622821808, -0.16005830466747284, -0.2870270013809204, -0.10363325476646423, 0.1581602841615677, -0.12926256656646729, -0.2080238163471222, -0.06035000458359718, -0.01726217195391655, 0.13472600281238556, -0.1777099370956421, -0.5261005759239197, -0.27749916911125183, 0.0866689383983612, 0.2859594225883484, -0.39547473192214966, -0.04130537062883377, -0.1526775360107422, -0.04042266681790352, -0.03137926012277603, 0.19469954073429108, 0.279048353433609, 0.3595588505268097, -0.22075648605823517, -0.37125974893569946, -0.44828054308891296, -1.3511581420898438, -0.16971547901630402, -0.3143288493156433, -0.3788031339645386, -0.054891377687454224, 0.4619787335395813, -0.4558354616165161, -0.31004276871681213, 0.3646039664745331, -0.3244423270225525, -0.2359294891357422, -1.1981343030929565, 0.3526673913002014, -0.28224462270736694, -0.9976570010185242, -0.2208160012960434, 0.014877621084451675, -0.020421897992491722, 0.3665379583835602, 0.10905922949314117, 0.1292061060667038, 0.3285874128341675, -0.30173638463020325, -0.3072058856487274, -0.09561289101839066, 0.08762124180793762, 0.20592236518859863, 0.32070136070251465, 0.32958948612213135, -0.7460677623748779, 0.13310714066028595, 0.8387752771377563, 0.04661308228969574, -0.2634451389312744, -0.25278139114379883, 0.34556707739830017, -0.012301458045840263, -0.38017675280570984, -0.14550121128559113, 0.5625877976417542, 0.5824181437492371, 0.14499413967132568, -0.7018282413482666, -0.4471025764942169, 0.3392593562602997, 0.052910834550857544, -0.20394852757453918, 0.10585495084524155, 0.3300006687641144, 0.5598822236061096, 0.4479824900627136, 0.003030866850167513, -0.12384869158267975, 0.17095084488391876, 0.2036772519350052, 0.6898425817489624, 0.18443961441516876, -0.3756846785545349, 0.052263252437114716, 0.41217881441116333, 0.2527371942996979, -0.879801869392395, 0.02015184424817562, 0.5836173295974731, 0.05475247651338577, 0.18746298551559448, -0.14439666271209717, 0.029753826558589935, -0.014266042038798332, -0.20616772770881653, -0.21737566590309143, 0.24837838113307953, 1.4372750520706177, -0.4534451961517334, 0.07466506212949753, -0.8261123895645142, -1.1271408796310425, -0.3987407684326172, 0.4748258888721466, 0.2994081974029541, -0.026550937443971634, -0.5455235242843628, -0.20880204439163208, 0.03934734687209129, -0.4578835666179657, 0.7539083957672119, -0.5848982334136963, -0.28234726190567017, -0.4292148947715759, -0.3874719440937042, 0.19197434186935425, 0.04069061949849129, -0.223302960395813, -0.05733846127986908, 0.17167843878269196, -0.04687666520476341, 0.31177815794944763, -0.16904279589653015, -0.0018194566946476698, 0.5804785490036011, -0.12918910384178162, 0.3258260190486908, 0.24921521544456482, 0.04380352795124054, -0.12102310359477997, 0.5970795750617981, 0.05224444344639778, 0.29656535387039185, 0.35989218950271606, 0.18277163803577423, -0.10080890357494354, 0.5702495574951172, -0.060346122831106186, 0.26161086559295654, -0.42896005511283875, 0.42514321208000183, 0.18147650361061096, -0.22818252444267273, -0.29721102118492126, -0.012624325230717659, 0.28893551230430603, -0.2587432265281677, -0.005445599555969238, 0.45605379343032837, 0.21508528292179108, 0.2757902145385742, 0.20961999893188477, 0.1797284334897995, -0.2652403712272644, 0.5023040771484375, 0.10641761124134064, -0.5398765206336975, 0.4154367744922638, -0.030074618756771088, 0.1925642490386963, 0.16018615663051605, 0.12303473055362701, 0.10314443707466125, 0.21756000816822052, 0.08945956826210022, -0.11901519447565079, 0.4206255078315735, 0.02120750956237316, -0.025929007679224014, 0.16868385672569275, -0.05384739115834236, -0.008964468725025654, -0.2741140127182007, 0.22871050238609314, -0.300510436296463, 1.0805789232254028, 0.5335613489151001, 0.6767820715904236, 0.6043517589569092, -0.12377522140741348, -0.024117005988955498, 0.38112500309944153, -0.3549025058746338, 0.23289744555950165, -0.847087025642395, -0.4697601795196533, -0.9357370734214783, -0.6458696126937866, 0.0777815505862236, 0.842474102973938, -0.30621209740638733, 0.45234179496765137, 0.3120269477367401, -0.11917876452207565, 0.058053694665431976, 0.32831594347953796, -0.11034107208251953, 0.784415602684021, -0.09479635953903198, 0.4209844470024109, -0.41662099957466125, 0.3592964708805084, 0.019297325983643532, 0.16845747828483582, 0.1365807205438614, -0.3249046504497528, 0.13593772053718567, 0.040848053991794586, 0.1808963418006897, -0.3313012421131134, -0.05711543187499046, 0.11269126087427139, 0.1810680776834488, 0.06223166361451149, -0.16874423623085022, 0.512129008769989, -0.3146069645881653, -0.2729266583919525, 0.02619754709303379, 0.33735188841819763, 0.046188436448574066, 0.4063822627067566, -0.3933183550834656, 0.09077289700508118, 0.3128124177455902, -0.015307482331991196, -0.16597513854503632, -0.19988249242305756, 0.3608008325099945, 0.05626818910241127, 0.18449348211288452, 0.0479341521859169, -0.38448402285575867, -0.09774617850780487, -0.20411968231201172, -0.535223126411438, -0.5524157881736755, 0.11050870269536972, 0.11629187315702438, -0.060016170144081116, 0.022803382948040962, 0.1477850377559662, 0.21563182771205902, -0.15601462125778198, 0.109597347676754, -0.02560727298259735, -0.09951625019311905, -0.016769621521234512, 0.11433760076761246, -0.4160904288291931, 0.3471129536628723, -0.39388617873191833, -0.7111877799034119, -0.5197836756706238, 0.21953152120113373, 1.2750381231307983, -0.7728870511054993, 0.4097389876842499, -0.4499579668045044, 0.3055513799190521, 0.3488546907901764, -0.49437904357910156, 0.6953210234642029, 0.2134946882724762, 0.41887426376342773, 0.2277853935956955, 0.05930807441473007, 0.3609797954559326, -0.05135967582464218, 0.2957724630832672, -0.4122653901576996, -0.23541148006916046, -0.15397614240646362, -0.18197867274284363, 0.1707581728696823, 0.018325766548514366, 0.536289632320404, 0.18518054485321045, 0.08821678161621094, 0.06880045682191849, -0.3963232636451721, -0.10315215587615967, 0.03054801933467388, 0.2797589898109436, 0.02513173595070839, -0.01634381152689457, 0.2744445204734802, -0.1268329620361328, -0.03385484963655472, 0.5623655915260315, -0.024523409083485603, 0.08942916244268417, -0.32554343342781067, -0.209514319896698, -0.23433159291744232, 0.10939666628837585, -0.07143357396125793, 0.3168131709098816, 0.013979951851069927, -0.11421198397874832, 0.17640574276447296, -0.13528650999069214, -0.04702268913388252, -0.16074052453041077, 0.2567671239376068, -0.1766444593667984, 0.37598246335983276, -0.14892467856407166, -0.019656039774417877, -0.079350546002388, 0.6066019535064697, -0.010408485308289528, 0.11004247516393661, 0.3065870702266693, 0.004989044740796089, 0.027711747214198112, -0.3591077923774719, -0.03542913496494293, -0.04954465106129646, 0.3384668827056885, -0.012132012285292149, 0.06236227601766586, -0.0858706682920456, 0.1497325301170349, 0.21140077710151672, 0.08453946560621262, 0.08022702485322952, 0.4342955946922302, -0.568917453289032, 0.5035930871963501, 0.21343395113945007, -0.18379001319408417, 0.2708810567855835, -0.027453899383544922, -0.0031581276562064886, -0.3782651126384735, -0.40314462780952454, -0.3385613262653351, 0.6409474015235901, -0.10964440554380417, -0.05345925688743591, -0.07134168595075607, 0.36103346943855286, 0.379167765378952, -0.3182426989078522, -0.36734238266944885, -0.4023391008377075, -0.027722880244255066, 0.3852557837963104, 0.05804658681154251, -0.3309279680252075, 0.28539371490478516, -0.8031164407730103, -0.2959628403186798, 0.059447456151247025, -0.4563480615615845, 0.3582916855812073, 0.5893351435661316, -0.6058929562568665, 0.030229832977056503, -0.14032860100269318, 0.4946761429309845, -0.660481870174408, -0.24463343620300293, -0.06326490640640259, -0.053184643387794495, 0.4240816533565521, 0.10131945461034775, 0.06074534356594086, 0.09867149591445923, 0.1043015643954277, 0.2842596173286438, -0.3645147383213043, -0.0762370303273201, -0.1781895011663437, 0.404769629240036, -0.21886704862117767, 0.37461376190185547, -0.40916070342063904, -0.3410507142543793, 0.291344553232193, 0.11821381747722626, 0.14962726831436157, 0.19226525723934174, -0.17359748482704163, -0.48417648673057556, 0.05558686703443527, 0.04179488867521286, -0.10272247344255447, -0.035978082567453384, -0.011459656059741974, 0.4568997621536255, 2.4388287783949636e-05, 0.035828299820423126, -0.1689451038837433, -0.020141175016760826, -0.01185398455709219, -0.24939745664596558, 0.15981744229793549, -0.0980045273900032, 1.6616923809051514, 0.8268963098526001, -0.13084617257118225, -0.40839844942092896, -0.6659138798713684, 0.18329066038131714, 0.22566106915473938, 0.22222906351089478, 0.03111279010772705, 0.023969918489456177, 1.2433197498321533, -0.04042593389749527, -0.031115978956222534, 0.1905795931816101, 0.0005478259408846498, 0.09432704001665115, -0.39261093735694885, -0.013084065169095993, -0.0909852534532547, -0.03553910553455353, -0.1747298240661621, -0.1889219731092453, -0.44145968556404114, -0.4897187650203705, 0.20341934263706207, -0.11689462512731552, 0.6635813117027283, 0.47714436054229736, 0.19121171534061432, -0.023762023076415062, 0.4130708873271942, 0.022404979914426804, -0.03334848955273628, 0.5375949740409851, 0.025537630543112755, -0.44869524240493774, -0.9501386880874634, -0.6314540505409241, 0.11715743690729141, -0.7206542491912842, -0.5416982173919678, -0.08411086350679398, 0.11640534549951553, 0.261161208152771, 0.2505240738391876, 0.7395073771476746, -0.005655105225741863, -0.49140578508377075, -0.3841009736061096, -0.39123496413230896, -0.5127594470977783, 0.2288103699684143, 0.7879346013069153, 0.10674582421779633, -0.20014724135398865, 0.6558314561843872, -0.08527597784996033, 0.650557279586792, -0.8437586426734924, 0.1453104019165039, 0.1361863762140274, 0.38015714287757874, 0.07007157802581787, -0.07377475500106812, 0.06093323975801468, -0.13635770976543427, -1.1204094886779785, -0.07755657285451889, 0.33393335342407227, 0.5545862913131714, -0.08630192279815674, 0.8291712403297424, -0.0737127885222435, -0.08775700628757477, 1.0924829244613647, 0.39577484130859375, -0.23685404658317566, -0.14881500601768494, 0.02390550822019577, 0.0570489838719368, -0.4607619643211365, 0.12183932214975357, -0.2230796217918396, 0.31244492530822754, -0.12639561295509338, 0.43102747201919556, 0.16040702164173126, 0.10431814938783646, -0.30483052134513855, -0.08301879465579987, 0.6337264776229858, 0.25058960914611816, 0.14380338788032532, -0.3466111719608307, -0.0004307494091335684, 0.027217194437980652, 0.17771391570568085, 0.4088214039802551, -0.1337740570306778, -0.09407886117696762, -0.5056178569793701, 0.2648441195487976, 0.009362205862998962, -0.4117603600025177, 0.24940785765647888, -0.08722097426652908, 0.1684444546699524, -0.23963241279125214, 0.0877036526799202, -0.06131375953555107, -0.0015570999821648002, 0.36720722913742065, 0.5844054222106934, 0.38024526834487915, -0.7893767952919006, 0.5297788381576538, -0.2822861969470978, 0.21097366511821747, -0.048444222658872604, 0.4703913927078247, 0.07216035574674606, 0.011628731153905392, -0.6301962733268738, -0.1732529103755951, -0.36655154824256897, -0.1811678111553192, 0.2947487533092499, 0.3348432779312134, 0.27447187900543213, -0.30813655257225037, 0.301159530878067, -0.23949016630649567, 0.4038281738758087, 0.4868414103984833, 0.9150214195251465, -0.5069119930267334, -0.9853782653808594, 0.19816501438617706, 0.5059038400650024, -0.041671160608530045, 0.12065283954143524, 0.044558651745319366, 0.35038527846336365, -0.07826316356658936, -0.13492023944854736, -0.6038929224014282, 0.03180031478404999, 0.12681227922439575, -0.15123499929904938, -0.09111810475587845, -0.14708177745342255, 0.24154366552829742, -0.2673017084598541, 0.0109514519572258, 1.5246332883834839, 0.001489361166022718, 0.3681719899177551, 2.206557273864746, 0.4524899125099182, -1.5432811975479126, -0.2317146211862564, 0.2682960033416748, 0.005723613314330578, -0.022523479536175728, 0.5031251311302185, 0.08427190780639648, 0.19910824298858643, -0.8768481612205505, 0.0720970556139946, 0.29729002714157104, -0.17447204887866974, -0.10125557333230972, -0.36853083968162537, 0.3137507736682892, 0.2676217555999756, 0.07507815957069397, 0.18387368321418762, -0.36841881275177, -0.16998088359832764, 1.3693979978561401, -0.2624574601650238, -1.0805916786193848, 0.057326700538396835, -0.22075708210468292, -0.0855775699019432, -0.2995733916759491, 0.0541202537715435, 0.17635880410671234, 0.412622332572937, -0.12668567895889282, -0.031376566737890244, -0.15966710448265076, -0.9408126473426819, 0.015436614863574505, 0.18392670154571533, -0.3065597414970398, 0.04704601690173149, -0.18787354230880737, -0.2833389937877655, -0.9739487171173096, -2.8306617736816406, 0.7216524481773376, 0.49264276027679443, 0.5618211030960083, 0.5764122605323792, 0.3283050060272217, -0.045377280563116074, -0.17545737326145172, -0.18447765707969666, 0.051911383867263794, 0.19898274540901184, -1.0080724954605103, 0.11531589180231094, 0.329937219619751, -0.002449026331305504, -0.07391010969877243, -0.3923527002334595, 0.1917477250099182, 0.36444053053855896, -0.152775377035141, -1.5838453769683838, 0.05109328404068947, -0.6461348533630371, 0.8770983815193176, -0.19950464367866516, -1.3531485795974731, -0.04700221121311188, 0.35278502106666565, -0.0824938639998436, -0.17006520926952362, -0.10231421142816544, 0.15896645188331604, 0.2577763497829437, -0.3146650493144989, 0.03054516203701496, 0.038096778094768524, 0.16438060998916626, -0.11862239241600037, -0.21905943751335144, -0.044191595166921616, 0.12737593054771423, 0.05683876574039459, -0.3590668737888336, 0.5304000973701477, 0.07090878486633301, -0.2630368769168854, -0.5921692252159119, 0.2861429452896118, 0.09047992527484894, -0.2831847667694092, -1.9974433183670044, 1.7716127634048462, 0.21381905674934387, 0.019999999552965164}; 

    nam1.dilations = {1,2,4,8,16,32,64};
    nam1.input_size = 1;
    nam1.condition_size = 1;
    nam1.head_size = 2;
    nam1.channels = 4;
    nam1.kernel_size = 3;
    nam1.activation = "Tanh";
    nam1.gated = false;
    nam1.head_bias = false;

    nam1.dilations2 = {128,256,512,1,2,4,8,16,32,64,128,256,512};
    nam1.input_size2 = 4;
    nam1.condition_size2 = 1;
    nam1.head_size2 = 1;
    nam1.channels2 = 2;
    nam1.kernel_size2 = 3;
    nam1.activation2 = "Tanh";
    nam1.gated2 = false;
    nam1.head_bias2 = true;

    //nam1.with_head = NULL;
    nam1.with_head = false;
    nam1.head_scale = 0.2;


  /*========================================================================*/

  // ADD YOUR MODEL IDENTIFIER HERE ////////////////////////////////// < -------------------------
  nam_collection = {  nam1
                     };
}
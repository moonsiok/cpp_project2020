#pragma once
#include <string>
#include "DataSets.h"

template <typename T>
struct DataSet
{
    std::string description;
    std::vector<T> data;
};
std::vector<DataSet<int>> GenerateIntDataSets()
{
    return {
        { "random integer", GenerateData(10) },
        { "random integer", GenerateData(100) },
        { "random integer", GenerateData(1000) },
        { "Polyakov team int 10", {575, 266, -718, -826, -986, -674, -747, -815, -487, -283} },
        { "Polyakov team int 100", {-889, -954, 368, -897, -753, -554, 335, -961, 375, 166, -919, -590, -968, 58, 941, -971, 327, -981, -316, 227, -260, 644, -206, -585, -806, -401, 707, 314, 606, 404, -869, -591, 518, -912, -892, -63, -9, -323, 360, -497, -395, -455, -99, -981, 501, 362, 513, -306, 544, -984, -903, -730, 70, -305, 916, 290, 822, 330, 375, 422, -66, -782, 983, 459, -982, -443, -73, 767, 136, 903, 477, 132, 655, -778, -540, -560, 682, 39, 472, -959, -518, 125, -214, -181, 875, -430, 961, -804, -925, -653, -465, 527, -669, 790, -669, -980, -864, 959, 222, -218} },
        { "Polyakov team int 1000", {291, -462, -757, 789, 719, -50, 77, -266, -1000, -49, -245, -449, -754, -294, 515, 204, 717, 444, 351, 867, 440, -666, -419, -381, -108, -213, -846, 903, -897, 252, -841, -664, 338, -794, -497, 609, -109, 951, -657, 566, 193, -541, 190, 131, -92, 844, -260, -342, 95, 863, -211, 240, -935, -624, -120, 73, 310, 544, -906, 808, 250, 497, 681, -718, 257, -403, 824, -335, 748, -104, -523, 231, -35, -269, 316, -240, -593, 509, -726, -270, -194, -365, -490, 250, 988, -578, 574, 6, 702, 69, 282, -496, 835, 944, 560, -539, -17, 553, 214, 687, -166, 22, -436, 275, 497, 158, -637, -834, -572, 776, 753, -193, -977, -423, 661, 767, -360, 447, 576, -275, 349, 777, 8, -88, -800, -629, 804, -596, 456, -980, 877, -768, 907, 602, -219, -89, -718, -502, 757, -512, 70, 746, 99, 532, 681, -426, -183, -781, -883, -488, 300, -296, -882, 221, -827, -944, -823, 337, -436, 55, 17, -570, 847, 498, -326, -604, -959, -309, -47, -662, 876, 887, 85, 249, 530, 109, 175, -998, -837, 782, -340, -992, -837, -179, 35, 710, 806, 31, 848, 31, -912, 855, 699, 663, -175, 957, -44, -138, 435, 222, -601, 436, 949, 137, -128, -566, -759, -431, 455, -175, -140, -601, 726, -651, 532, 938, -995, -293, 114, 547, 100, 843, 53, -734, -394, -189, 843, -402, 692, 689, 95, 508, 12, -4, 145, -269, -106, 959, 46, -904, 391, -558, -322, -546, -962, -709, 564, -531, 318, 739, -388, -392, -926, 547, -675, 996, -824, 868, 495, -13, 998, -840, 948, 830, -423, -405, -724, 276, 382, -410, 132, 796, 643, -345, -975, 783, -872, 733, -835, 138, -364, 122, 749, 970, -67, -931, 805, -190, 414, 862, -456, -387, 454, 708, -460, 738, -402, 514, -98, 841, -223, -926, 674, 0, 309, -782, 975, 554, 519, 325, -658, 692, -838, -413, 319, 241, 578, 466, 333, -758, -861, -716, 214, 726, -929, 830, -469, 246, -120, -20, 94, 348, -31, -327, -758, 298, -187, -783, 383, -477, 529, 239, 699, -407, -774, -601, -519, 512, 892, 943, -797, 565, 384, 943, -698, 342, 593, -155, 153, 329, 806, 860, -641, 949, 339, 521, -414, 424, -733, -526, 14, 642, -32, 975, -18, -271, -759, 256, 895, 595, 756, 661, -725, 604, -741, -479, 441, -195, -177, -476, 350, -334, -959, -812, -451, 506, 331, 216, 23, -744, 381, 758, -135, 880, 103, -787, -963, 71, -181, -982, 835, 443, -862, -327, -638, -665, 496, -460, 705, 951, -831, 488, 793, 946, 159, -177, -623, 578, -680, 579, -165, 485, -89, -796, 80, 949, -834, 229, -389, -580, 84, 25, -275, 520, 299, 533, -215, 918, -322, -14, 248, -729, -523, -230, 17, -526, 743, 442, -111, -393, -931, 403, -654, 992, 4, 831, 369, -134, -339, 196, 68, 638, 310, -26, 751, 231, 524, 89, 141, -441, -860, -629, -651, -108, 828, 419, 109, 616, 258, 783, 258, 934, 969, -479, 591, 112, 395, -496, 651, -190, 491, -855, 578, -609, -851, -222, 804, -401, 545, -869, -63, -296, -293, -40, 578, -275, 105, 979, 825, 12, 150, 129, 373, 691, -560, 855, 822, 174, 0, -172, 375, 994, -440, 878, 680, 208, -92, 114, 671, -857, 139, 461, -208, 76, 33, 33, -661, 706, -574, 181, 424, 225, -92, 99, -641, -702, -37, -400, 757, -997, -346, 728, -451, -945, -814, -28, 182, 833, -307, 512, -21, 925, 788, -125, -433, -292, -552, 527, 643, 324, 828, 140, 529, 140, 448, -662, 64, 671, -915, 56, 13, 597, -302, -609, 102, 511, 731, -228, -42, 789, 426, -168, 799, 233, -846, 417, -612, -829, 230, 616, 731, 923, -567, -9, -352, -85, -90, -296, -209, -241, 392, 239, -566, -414, 296, 562, 93, 380, -834, 70, -814, -308, 23, 168, -424, 694, -335, -988, 438, -521, -661, -556, 453, 879, 562, 99, 987, -218, -303, 33, -619, -948, 435, -370, 283, -826, -866, 61, 341, 611, -599, -574, -551, -50, 249, -930, 958, -16, 860, -38, 194, -325, -826, 612, 907, -85, -523, 711, -78, -501, 170, -826, 515, 472, -640, 453, 811, -461, 222, -633, 967, -560, 427, 963, -368, 392, -962, 798, -301, -248, 151, 200, -179, -338, 301, 514, 243, 273, 490, -374, -391, -600, 288, 669, 311, 376, -120, 439, 182, -614, 378, 470, 373, 784, -137, -667, 787, 131, -798, -894, 581, -427, -446, -495, 814, -691, -371, -427, 429, 891, -766, -364, -4, -589, -688, -373, 203, 284, 724, -755, -890, -805, 220, -620, 492, 717, 423, -15, -165, 762, -763, 694, 447, 28, -588, -131, 619, 43, 664, -97, 783, -724, 860, 888, -233, -333, 179, 953, 317, 573, -98, 620, -95, 506, -414, 32, 768, -283, 100, 799, -232, -209, 675, 529, -368, 976, -119, 61, 828, 449, 1, -519, 943, -220, 259, 957, 168, -116, 354, -995, -548, 628, -584, -544, 991, -891, -900, -549, -767, -289, -575, 922, -254, -487, 28, -256, -540, 409, 203, -619, 996, -44, -107, 427, -606, -30, 61, -850, -731, -524, 497, 258, 694, -771, 270, 155, 725, 945, 854, -912, -763, -633, 742, 516, 404, 189, 553, -862, 824, 12, 52, -59, 819, -69, 931, -397, -324, -59, 246, -94, 332, -49, -122, -905, 252, 9, 164, -486, -922, -294, 147, 819, 772, -368, -663, -653, -306, -907, 384, -920, 683, -986, -402, -327, 669, 49, -346, 152, -97, 259, -110, -854, 666, 183, -697, -621, -116, 88, 10, 178, 595, -153, 247, 32, 449, 626, -605, 329, -188, 875, 683, 632, -117, -27, -863, 861, 906, 467, -558, -511, -656, -338, -203, -431, -918, -456, -744, -929, -798, 590, -45, 816, -758, -716, 371, 562, -328, 524, -681, 93, 711, 712, -283, -502, 399, -595, -647, 442, 595, 530, -926, -170, 903, -305, 758, -774, 271, -75, -602, 845, 744, -148, -840, 831, 383, -317, -70, 771, -915, -188, -632, -351, -272, 550, -32, 899, -756, -205, 956, -371, 672, 827, -245, -422, -857, 598, -826, 647, 82, 1} },
    };

}
std::vector<DataSet<double>> GenerateDoubleDataSets()
{
    return {
       { "asc sorted double", {1.0, 2.0} },
       { "desc sorted double", {3.0,2.0} },
       { "just doubles", GenerateDoubleData() },
       { "Polyakov team double 10", {933.021, 488.777, -267.599, -922.32, 233.878, -139.69, 753.473, 814.696, 124.412, -480.668} },
       { "Polyakov team double 100", {266.5, 495.251, -870.98, -590.88, -555.806, -258.828, 51.057, 267.113, -30.266, -701.458, -995.57, 198.622, -901.533, -407.609, -419.514, 965.687, 792.385, -830.434, 329.911, 331.112, -43.452, -110.003, 187.108, 810.028, 192.553, 47.746, -373.006, -389.182, -794.453, -746.444, -219.961, -927.519, 219.698, -751.761, 670.798, 562.57, -750.864, 174.249, -379.089, 47.404, 879.681, -142.98, 315.452, -463.556, 79.948, -99.705, 499.573, 915.637, 855.769, 591.891, 979.004, -43.892, 517.461, 398.012, -250.574, 92.657, -88.802, -892.442, 444.502, 629.316, -123.719, 664.075, -57.709, -459.674, 174.521, -449.523, -625.85, 72.465, -683.52, -710.248, -936.336, -894.622, 387.302, 955.072, 292.584, 56.955, 979.598, -781.124, 774.394, 415.737, -780.449, 349.025, 835.726, 439.385, -344.746, -327.053, -163.029, -456.611, 289.03, -205.767, 130.418, -828.234, -785.307, -601.17, -128.554, -776.097, 993.497, 703.632, -809.157, 691.297} },
       { "Polyakov team double 1000", {677.025, -812.559, 546.158, -201.631, 754.878, -309.227, 726.146, -95.104, 530.521, 965.204, -431.775, -262.343, 29.085, 147.234, 997.461, -431.318, -573.203, 708.916, -586.588, 631.289, -773.14, 473.664, 295.348, -817.099, -698.483, 724.11, 618.704, -983.565, -766.862, 342.581, -814.236, -168.821, 360.117, 178.946, -116.655, -968.283, 342.178, 459.756, -886.926, 280.945, 193.014, -557.998, -991.678, 860.082, 849.139, -912.396, -648.454, -946.84, 990.195, -371.396, 252.934, 190.531, -568.389, -636.492, -128.422, 847.864, 586.208, -162.63, 753.541, 657.854, -445.235, 677.819, 301.746, -605.346, 608.848, -164.125, 249.433, 501.704, -77.724, -294.276, 386.974, -341.27, 717.283, -936.16, -900.698, 529.432, 870.903, 742.76, 999.771, -530.675, -686.096, 64.595, 195.145, 42.44, -81.801, 704.722, 745.644, -843.961, 594.144, 985.442, -952.152, -669.02, 363.305, -38.537, -653.996, 649.497, -321.884, -334.992, -37.252, -924.505, -50.28, -96.352, 578.546, -891.169, -511.648, -382.475, 273.335, 88.405, -980.82, -479.956, 659.557, -554.079, -462.548, -631.614, -764.647, 115.814, -283.069, -956.108, 561.957, -506.899, 753.096, 939.907, 848.89, 956.286, -961.715, -697.416, -33.162, 464.819, 185.009, -309.055, 111.281, 280.592, -460.961, 627.288, -541.919, 276.484, 401.755, -828.01, 119.678, 359.752, -302.887, 422.428, 955.608, -311.748, -728.508, -248.313, -640.435, -575.408, -326.39, -268.769, 110.611, -847.973, 162.738, 737.66, 632.702, -223.473, -586.656, -84.683, 712.953, 975.538, 48.761, -316.703, -781.821, 717.134, -757.745, -525.664, -667.939, 853.468, 356.073, 248.865, -375.888, -254.159, 967.043, 355.173, -570.421, -911.855, -717.655, -369.408, 29.983, -599.178, -719.361, 17.088, -319.679, 419.376, -759.223, -208.359, -568.581, 841.327, 577.34, -782.452, 49.71, 923.422, -540.629, -5.275, -848.506, -139.038, 7.633, 882.051, 429.105, -139.881, -31.707, 228.237, -883.08, 285.207, 45.587, -292.775, -195.003, -309.878, -998.711, 7.902, 897.347, 310.623, 745.653, 524.969, 596.116, -436.487, 417.91, 507.081, 409.761, 634.144, 725.994, -963.151, 202.676, 579.862, 963.586, 964.835, 129.649, 453.366, -888.197, 81.434, 380.435, -432.093, 300.029, 360.769, -687.455, 221.596, -61.213, 17.665, 829.181, -338.141, 764.929, 891.734, -587.071, -834.001, -835.121, -737.177, -336.766, 26.571, -125.967, -371.729, -105.531, 375.229, -462.363, -576.289, 473.557, -591.276, 18.163, 286.718, 923.559, 537.853, 313.687, -637.631, -784.296, -855.413, 227.442, -715.566, -925.556, -855.123, 186.78, 693.364, -177.866, 353.948, 434.57, 286.403, -502.519, 169.194, -397.498, -353.154, -593.539, -254.405, 617.569, -537.48, -472.418, -767.853, -961.264, 579.459, -532.551, -500.518, -464.547, 91.275, 695.933, -433.006, -160.932, 269.621, 741.383, 444.087, -788.238, 766.991, -199.374, 400.182, -662.095, 541.326, 700.723, -654.886, -556.357, 622.684, -37.91, -892.721, -893.942, 777.907, 279.708, 913.725, -65.035, 543.314, -168.041, 295.982, 200.573, 879.549, 423.213, 155.472, -242.517, -464.558, -495.66, 829.556, -784.975, 264.242, -207.958, -118.619, 877.525, 515.57, 226.384, -279.332, -308.411, -732.363, -836.676, 916.102, 927.554, -444.186, 916.822, -18.194, -474.364, -623.172, 665.75, 946.528, -849.825, 152.037, -888.298, 825.342, -446.409, -712.128, 39.921, 650.64, -797.613, -311.176, -880.572, -487.67, 478.088, 144.921, 488.231, -623.224, -384.199, 150.825, -176.027, -901.017, -964.851, -476.975, -188.012, 854.3, 539.905, -198.457, -342.501, -717.005, -382.673, 276.604, -688.142, -991.883, -349.378, 175.561, -915.55, -114.191, -192.951, -846.671, 398.18, 310.885, 510.018, -988.527, 627.042, 189.917, -546.531, -875.95, 152.464, 798.635, -440.122, -214.771, -384.893, 719.796, 194.976, -806.962, -960.173, -595.68, 815.422, -750.929, 305, 149.417, 235.807, -554.464, 265.306, 159.412, -229.636, -304.909, 516.892, -10.945, 360.589, -103.242, -504.198, 75.863, -629.083, -913.293, -584.314, -644.584, -471.234, 585.022, 967.55, 623.715, 995.776, 977.659, -627.524, -260.834, 742.001, -12.061, -839.035, -432.277, -666.943, 205.11, -581.529, 159.392, 625.526, -887.162, 539.809, 792.03, 52.824, -632.869, -893.862, -281.293, -351.033, 704.001, -369.186, -513.765, -776.947, 934.095, 387.994, 742.15, 294.86, 503.749, 448.43, -435.102, 983.238, -907.481, -310.179, 804.59, -361.279, 476.206, -845.323, -297.817, -17.261, 235.209, -225.836, 133.295, 121.057, 708.254, 305.935, 311.26, 101.064, -66.092, 411.403, -590.968, 442.276, 328.726, -566.865, -146.989, 565.932, 254.116, -317.429, 760.199, 110.755, -894.772, -2.293, 407.376, -519.003, -604.544, -401.674, -251.678, 249.932, 176.872, -145.9, 706.164, -363.176, -614.394, -948.249, 469, 613.394, 873.621, 651.852, -698.907, -133.631, -840.649, 757.747, 214.887, -683.827, 435.915, 657.362, -405.794, 595.987, 705.594, -425.773, -192.943, 159.343, -322.05, -824.164, 180.673, -791.122, -746.567, -729.584, -934.131, 743.622, 589.886, -406.333, -691.728, -73.203, 340.349, -839.504, -375.417, 342.183, -677.14, 849.078, -338.513, 482.715, -82.092, 63.894, 592.224, 990.163, -780.179, -459.087, -130.652, -824.767, 957.761, 932.635, 200.272, 532.059, -423.925, 780.097, 654.722, 9.709, -458.46, -193.204, -357.548, 309.217, -86.431, 223.408, 664.416, 526.29, -224.658, 723.282, -465.118, -163.923, 95.437, 108.471, 285.538, -696.168, 400.636, 410.012, -837.483, -342.524, -279.556, 252.984, -272.468, 315.617, 994.448, -559.057, 913.979, -87.885, 109.173, -945.777, -482.67, -734.975, -41.833, 319.36, 56.393, -365.853, 4.812, 684.664, 183.297, -170.953, -609.039, 459.997, 607.746, 232.194, 642.373, -313.879, 480.353, 540.608, 833.868, 485.05, -848.966, -23.013, 348.993, 442.451, -892.416, -900.782, 785.813, 833.137, 636.754, 998.301, -18.772, 277.309, 228.625, 459.334, 136.823, 406.493, 102.589, -862.85, 460.962, -326.08, -738.977, -407.521, 508.412, -394.649, 569.738, 87.658, -885.612, -631.902, -279.05, 138.766, 478.093, 676.245, 985.717, -961.74, -283.673, -45.184, -762.934, 69.767, 846.763, -789.086, -327.114, -465.224, -896.418, 445.998, -948.777, 368.066, -526.989, 978.874, 292.24, -441.001, -200.432, -928.649, -509.809, -928.78, 193.109, 980.374, -634.325, 352.806, 624.469, -712.365, 16.067, -823.343, 789.911, -684.557, 295.092, -255.75, 652.524, -622.355, 296.21, 15.043, -140.902, 207.429, 406.991, -388.777, -556.383, -372.225, 587.882, 201.551, -900.313, -670.355, -661.058, -977.322, 949.042, -99.082, 781.096, -24.848, 699.212, 425.289, 777.913, -835.675, 968.764, 498.106, 75.194, -991.243, -10.452, 672.62, -597.204, -739.901, 149.979, -763.409, 670.633, -781.767, 820.862, 286.456, -723.614, -241.543, 355.99, 561.428, -407.878, 3.968, 603.739, -17.254, 26.486, -955.189, -581.961, -207.832, 635.996, 913.459, -826.429, 999.666, 347.084, -599.287, 769.182, -900.335, 362.056, -513.195, 413.004, 610.143, -697.232, 720.265, 383.063, 511.954, -96.69, -532.883, 336.152, 866.034, 333.445, -611.298, -768.034, 314.542, -532.733, 770.837, 31.467, -909.796, 666.833, -547.021, -110.493, -934.724, 107.773, -522.746, -499.163, -160.329, -692.731, -685.225, -248.523, -794.372, -469.693, 68.993, -971.204, 993.023, 575.93, 541.351, -92.829, 580.797, -449.131, -240.781, -884.074, 664.613, -195.558, 474.588, 842.511, -184.017, 34.905, -71.303, -79.826, -366.145, -649.544, -994.692, -506.767, 422.28, -101.467, 539.471, 509.832, 317.184, -697.828, 568.406, 929.751, -704.935, 279.597, 211.188, -149.408, 786.988, 359.789, 158.248, -293.119, -658.432, 699.823, -700.36, 420.776, -434.606, -902.684, 878.964, -170.766, 312.389, 662.922, 883.458, -508.441, 88.144, 315.51, -614.463, 263.204, 49.391, 472.666, -446.031, -84.002, -827.3, 455.582, 118.474, -494.566, -722.275, -101.724, -411.56, 796.099, 441.314, -553.573, -960.173, 240.437, 548.236, 6, -846.685, 711.148, 163.304, -73.35, 865.504, 169.25, -587.231, 270.394, -311.27, 944.497, -226.996, 371.876, 150.145, 349.649, -257.245, 753.471, -577.379, 206.06, -531.953, 947.535, 555.714, -423.456, 852.265, 523.691, 577.197, 333.372, -140.08, 425.175, 137.851, -998.473, 872.052, -29.473, -978.213, -774.434, 344.139, -903.753, -450.157, 82.707, 855.73, 134.352, -433.509, -695.165, -89.095, 390.032, 694.97, -794.242, -756.507, 220.391, 757.881, -872.765, 940.926, -123.497, -892.112, -940.717, -668.639, -836.951, 479.592, -893.073, -210.871, 331.022, 318.059, 849.74, 291.506, 280.995, -110.169, -679.929, -680.734, 167.062, 319.152, -573.344, 374.341, -869.519, 589.766, 249.11, -707.848, 623.745, 254.271, 280.406, -34.837, -559.861, 645.466, 249.922, -591.889, -340.723, 404.808, -154.863, 732.255, -299.056, -388.361, 314.97, -835.974, 935.257, 242.082, -983.239, 673.229, 149.906, -396.808, 967.877, -33.461, 144.17, -906.386, 618.296, -29.859, 466.8, 716.817, 461.411, -482.988, 641.572, 127.553, 485.668, 177.923, -552.233, 761.387, -981.618, -882.783, 781.4, -891.227, 533.531, 639.475, -481.679, -560.244, 706.877, -305.185, 251.038, -312.089, 444.54, 86.055, -479.317, -444.492, -178.461, -157.833, -69.706, -211.553, -810.727, 892.921, -513.415, 967.596, -155.005, 0.796, 549.63, 262.063, 707.532, -182.136, 392.776, -509.119, -642.969, 29.215, -997.506, -59.194, -132.724, -153.807, 139.277, 398.16, 489.025, 540.029, 462.013, -180.288, -782.369, 290.312, -541.697, 319.597, -916.685, 900.166, 907.126, 147.2, -737.135, -247.152, 730.854} },
    };
}
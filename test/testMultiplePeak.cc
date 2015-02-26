#include "Mu2e3/inc/FindMultiplePeak.hh"
#include <iostream>
#include "Mu2e3/inc/ConfigStruct.hh"

const ConfigStruct initParams;

bool testSinglePeak1()
{
	// Create test waveform 
	adcWaveform adcData;
	unsigned int adc[8] = {60, 64, 69, 208, 252, 198, 152, 111};
	adcData = adc;

	resultantHitData result;

	FindSinglePeak peak(initParams);
	peak.process(adcData, result);

    std::cout << "result[0]._peakTime" << result[0]._peakTime << std::endl;
    std::cout << "result[0]._peakHeight" << result[0]._peakHeight << std::endl;

    return true;
}

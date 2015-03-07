#include "Mu2e3/inc/FindMultiplePeak.hh"
#include <iostream>
#include "Mu2e3/inc/FitModelRoot.hh"
#include "TF1.h"

void testSampleData()
{
 	// Load Sample Data 
	TFile f("electronData25ns_8.root");
	gDirectory->cd("makeSD");
	TTree *treeData = (TTree*) gDirectory->Get("sddiag");
	

	adcWaveform adcData;
	std::vector<unsigned int> *adc = new std::vector<unsigned int>;
	treeData->SetBranchAddress("adc",&adc); 
	for (int i = 0; i < treeData->GetEntries(); ++i)
	{
		treeData->GetEntry(i);
		adcData
	}

}

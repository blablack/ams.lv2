#ifndef VCO3_H
#define VCO3_H

#include "synthdata.hpp"

using namespace lvtk;

enum WaveFormType
{
	SINUS,
	TRIANGLE,
	SAWTOOTH,
	RECTANGLE,
	AWAVE_SAW1,
	AWAVE_SAW2,
	AWAVE_SAW3
};

class Vco3: public Plugin<Vco3>
{
	private:
		float wave_period;
		float phi;
		float wave_period_2, wave_period_3, Pi2Times, PKonst;
		int waveForm;
		int semitone, octave;

		double m_rate;

		SynthData *synthdata;

	public:
		Vco3(double rate);
		void run(uint32_t nframes);
};

#endif

#ifndef ams_lv__dynamicwaves___ttl_hpp
#define ams_lv__dynamicwaves___ttl_hpp


#ifndef PEG_STRUCT
#define PEG_STRUCT
typedef struct {
  float min;
  float max;
  float default_value;
  char toggled;
  char integer;
  char logarithmic;
} peg_data_t;
#endif

/* <http://github.com/blablack/ams-lv2/dynamicwaves_8> */

static const char p_uri[] = "http://github.com/blablack/ams-lv2/dynamicwaves_8";

enum p_port_enum {
  p_freq,
  p_expFM,
  p_linFM,
  p_gate,
  p_retrigger,
  p_octave,
  p_tune,
  p_expFMGain,
  p_linFMGain,
  p_timeScale,
  p_volume1,
  p_volume2,
  p_volume3,
  p_volume4,
  p_volume5,
  p_volume6,
  p_volume7,
  p_volume8,
  p_vco1_waveForm,
  p_vco1_octave,
  p_vco1_tune,
  p_vco1_harmonic,
  p_vco1_subharmonic,
  p_vco1_phi0,
  p_vco2_waveForm,
  p_vco2_octave,
  p_vco2_tune,
  p_vco2_harmonic,
  p_vco2_subharmonic,
  p_vco2_phi0,
  p_vco3_waveForm,
  p_vco3_octave,
  p_vco3_tune,
  p_vco3_harmonic,
  p_vco3_subharmonic,
  p_vco3_phi0,
  p_vco4_waveForm,
  p_vco4_octave,
  p_vco4_tune,
  p_vco4_harmonic,
  p_vco4_subharmonic,
  p_vco4_phi0,
  p_vco5_waveForm,
  p_vco5_octave,
  p_vco5_tune,
  p_vco5_harmonic,
  p_vco5_subharmonic,
  p_vco5_phi0,
  p_vco6_waveForm,
  p_vco6_octave,
  p_vco6_tune,
  p_vco6_harmonic,
  p_vco6_subharmonic,
  p_vco6_phi0,
  p_vco7_waveForm,
  p_vco7_octave,
  p_vco7_tune,
  p_vco7_harmonic,
  p_vco7_subharmonic,
  p_vco7_phi0,
  p_vco8_waveForm,
  p_vco8_octave,
  p_vco8_tune,
  p_vco8_harmonic,
  p_vco8_subharmonic,
  p_vco8_phi0,
  p_env1_delay,
  p_env1_attackTime1,
  p_env1_attackLevel1,
  p_env1_attackTime2,
  p_env1_attackLevel2,
  p_env1_attackTime3,
  p_env1_attackLevel3,
  p_env1_attackTime4,
  p_env1_sustain,
  p_env1_releaseTime1,
  p_env1_releaseLevel1,
  p_env1_releaseTime2,
  p_env1_releaseLevel2,
  p_env1_releaseTime3,
  p_env2_delay,
  p_env2_attackTime1,
  p_env2_attackLevel1,
  p_env2_attackTime2,
  p_env2_attackLevel2,
  p_env2_attackTime3,
  p_env2_attackLevel3,
  p_env2_attackTime4,
  p_env2_sustain,
  p_env2_releaseTime1,
  p_env2_releaseLevel1,
  p_env2_releaseTime2,
  p_env2_releaseLevel2,
  p_env2_releaseTime3,
  p_env3_delay,
  p_env3_attackTime1,
  p_env3_attackLevel1,
  p_env3_attackTime2,
  p_env3_attackLevel2,
  p_env3_attackTime3,
  p_env3_attackLevel3,
  p_env3_attackTime4,
  p_env3_sustain,
  p_env3_releaseTime1,
  p_env3_releaseLevel1,
  p_env3_releaseTime2,
  p_env3_releaseLevel2,
  p_env3_releaseTime3,
  p_env4_delay,
  p_env4_attackTime1,
  p_env4_attackLevel1,
  p_env4_attackTime2,
  p_env4_attackLevel2,
  p_env4_attackTime3,
  p_env4_attackLevel3,
  p_env4_attackTime4,
  p_env4_sustain,
  p_env4_releaseTime1,
  p_env4_releaseLevel1,
  p_env4_releaseTime2,
  p_env4_releaseLevel2,
  p_env4_releaseTime3,
  p_env5_delay,
  p_env5_attackTime1,
  p_env5_attackLevel1,
  p_env5_attackTime2,
  p_env5_attackLevel2,
  p_env5_attackTime3,
  p_env5_attackLevel3,
  p_env5_attackTime4,
  p_env5_sustain,
  p_env5_releaseTime1,
  p_env5_releaseLevel1,
  p_env5_releaseTime2,
  p_env5_releaseLevel2,
  p_env5_releaseTime3,
  p_env6_delay,
  p_env6_attackTime1,
  p_env6_attackLevel1,
  p_env6_attackTime2,
  p_env6_attackLevel2,
  p_env6_attackTime3,
  p_env6_attackLevel3,
  p_env6_attackTime4,
  p_env6_sustain,
  p_env6_releaseTime1,
  p_env6_releaseLevel1,
  p_env6_releaseTime2,
  p_env6_releaseLevel2,
  p_env6_releaseTime3,
  p_env7_delay,
  p_env7_attackTime1,
  p_env7_attackLevel1,
  p_env7_attackTime2,
  p_env7_attackLevel2,
  p_env7_attackTime3,
  p_env7_attackLevel3,
  p_env7_attackTime4,
  p_env7_sustain,
  p_env7_releaseTime1,
  p_env7_releaseLevel1,
  p_env7_releaseTime2,
  p_env7_releaseLevel2,
  p_env7_releaseTime3,
  p_env8_delay,
  p_env8_attackTime1,
  p_env8_attackLevel1,
  p_env8_attackTime2,
  p_env8_attackLevel2,
  p_env8_attackTime3,
  p_env8_attackLevel3,
  p_env8_attackTime4,
  p_env8_sustain,
  p_env8_releaseTime1,
  p_env8_releaseLevel1,
  p_env8_releaseTime2,
  p_env8_releaseLevel2,
  p_env8_releaseTime3,
  p_out,
  p_n_ports
};

static const peg_data_t p_ports[] = {
  { -1, 1, 0, 0, 0, 0 }, 
  { -1, 1, 0, 0, 0, 0 }, 
  { -1, 1, 0, 0, 0, 0 }, 
  { 0, 1, 0, 1, 0, 0 }, 
  { 0, 1, 0, 1, 0, 0 }, 
  { 0, 6, 3, 0, 0, 0 }, 
  { -1, 1, 0, 0, 0, 0 }, 
  { 0, 10, 0, 0, 0, 0 }, 
  { 0, 10, 0, 0, 0, 0 }, 
  { 1, 10, 0.1, 0, 0, 0 }, 
  { 0, 1, 1, 0, 0, 0 }, 
  { 0, 1, 1, 0, 0, 0 }, 
  { 0, 1, 1, 0, 0, 0 }, 
  { 0, 1, 1, 0, 0, 0 }, 
  { 0, 1, 1, 0, 0, 0 }, 
  { 0, 1, 1, 0, 0, 0 }, 
  { 0, 1, 1, 0, 0, 0 }, 
  { 0, 1, 1, 0, 0, 0 }, 
  { 0, 6, 0, 0, 0, 0 }, 
  { 0, 6, 3, 0, 0, 0 }, 
  { -1, 1, 0, 0, 0, 0 }, 
  { 1, 16, 1, 0, 0, 0 }, 
  { 1, 16, 1, 0, 0, 0 }, 
  { 0, 6.283, 0, 0, 0, 0 }, 
  { 0, 6, 0, 0, 0, 0 }, 
  { 0, 6, 3, 0, 0, 0 }, 
  { -1, 1, 0, 0, 0, 0 }, 
  { 1, 16, 1, 0, 0, 0 }, 
  { 1, 16, 1, 0, 0, 0 }, 
  { 0, 6.283, 0, 0, 0, 0 }, 
  { 0, 6, 0, 0, 0, 0 }, 
  { 0, 6, 3, 0, 0, 0 }, 
  { -1, 1, 0, 0, 0, 0 }, 
  { 1, 16, 1, 0, 0, 0 }, 
  { 1, 16, 1, 0, 0, 0 }, 
  { 0, 6.283, 0, 0, 0, 0 }, 
  { 0, 6, 0, 0, 0, 0 }, 
  { 0, 6, 3, 0, 0, 0 }, 
  { -1, 1, 0, 0, 0, 0 }, 
  { 1, 16, 1, 0, 0, 0 }, 
  { 1, 16, 1, 0, 0, 0 }, 
  { 0, 6.283, 0, 0, 0, 0 }, 
  { 0, 6, 0, 0, 0, 0 }, 
  { 0, 6, 3, 0, 0, 0 }, 
  { -1, 1, 0, 0, 0, 0 }, 
  { 1, 16, 1, 0, 0, 0 }, 
  { 1, 16, 1, 0, 0, 0 }, 
  { 0, 6.283, 0, 0, 0, 0 }, 
  { 0, 6, 0, 0, 0, 0 }, 
  { 0, 6, 3, 0, 0, 0 }, 
  { -1, 1, 0, 0, 0, 0 }, 
  { 1, 16, 1, 0, 0, 0 }, 
  { 1, 16, 1, 0, 0, 0 }, 
  { 0, 6.283, 0, 0, 0, 0 }, 
  { 0, 6, 0, 0, 0, 0 }, 
  { 0, 6, 3, 0, 0, 0 }, 
  { -1, 1, 0, 0, 0, 0 }, 
  { 1, 16, 1, 0, 0, 0 }, 
  { 1, 16, 1, 0, 0, 0 }, 
  { 0, 6.283, 0, 0, 0, 0 }, 
  { 0, 6, 0, 0, 0, 0 }, 
  { 0, 6, 3, 0, 0, 0 }, 
  { -1, 1, 0, 0, 0, 0 }, 
  { 1, 16, 1, 0, 0, 0 }, 
  { 1, 16, 1, 0, 0, 0 }, 
  { 0, 6.283, 0, 0, 0, 0 }, 
  { 0, 1, 0, 0, 0, 0 }, 
  { 0, 1, 0.01, 0, 0, 0 }, 
  { 0, 1, 0.5, 0, 0, 0 }, 
  { 0, 1, 0.01, 0, 0, 0 }, 
  { 0, 1, 1, 0, 0, 0 }, 
  { 0, 1, 0.1, 0, 0, 0 }, 
  { 0, 1, 0.9, 0, 0, 0 }, 
  { 0, 1, 0.1, 0, 0, 0 }, 
  { 0, 1, 0.8, 0, 0, 0 }, 
  { 0, 1, 0.01, 0, 0, 0 }, 
  { 0, 1, 0.7, 0, 0, 0 }, 
  { 0, 1, 0.01, 0, 0, 0 }, 
  { 0, 1, 0.5, 0, 0, 0 }, 
  { 0, 1, 0.01, 0, 0, 0 }, 
  { 0, 1, 0, 0, 0, 0 }, 
  { 0, 1, 0.01, 0, 0, 0 }, 
  { 0, 1, 0.5, 0, 0, 0 }, 
  { 0, 1, 0.01, 0, 0, 0 }, 
  { 0, 1, 1, 0, 0, 0 }, 
  { 0, 1, 0.1, 0, 0, 0 }, 
  { 0, 1, 0.9, 0, 0, 0 }, 
  { 0, 1, 0.1, 0, 0, 0 }, 
  { 0, 1, 0.8, 0, 0, 0 }, 
  { 0, 1, 0.01, 0, 0, 0 }, 
  { 0, 1, 0.7, 0, 0, 0 }, 
  { 0, 1, 0.01, 0, 0, 0 }, 
  { 0, 1, 0.5, 0, 0, 0 }, 
  { 0, 1, 0.01, 0, 0, 0 }, 
  { 0, 1, 0, 0, 0, 0 }, 
  { 0, 1, 0.01, 0, 0, 0 }, 
  { 0, 1, 0.5, 0, 0, 0 }, 
  { 0, 1, 0.01, 0, 0, 0 }, 
  { 0, 1, 1, 0, 0, 0 }, 
  { 0, 1, 0.1, 0, 0, 0 }, 
  { 0, 1, 0.9, 0, 0, 0 }, 
  { 0, 1, 0.1, 0, 0, 0 }, 
  { 0, 1, 0.8, 0, 0, 0 }, 
  { 0, 1, 0.01, 0, 0, 0 }, 
  { 0, 1, 0.7, 0, 0, 0 }, 
  { 0, 1, 0.01, 0, 0, 0 }, 
  { 0, 1, 0.5, 0, 0, 0 }, 
  { 0, 1, 0.01, 0, 0, 0 }, 
  { 0, 1, 0, 0, 0, 0 }, 
  { 0, 1, 0.01, 0, 0, 0 }, 
  { 0, 1, 0.5, 0, 0, 0 }, 
  { 0, 1, 0.01, 0, 0, 0 }, 
  { 0, 1, 1, 0, 0, 0 }, 
  { 0, 1, 0.1, 0, 0, 0 }, 
  { 0, 1, 0.9, 0, 0, 0 }, 
  { 0, 1, 0.1, 0, 0, 0 }, 
  { 0, 1, 0.8, 0, 0, 0 }, 
  { 0, 1, 0.01, 0, 0, 0 }, 
  { 0, 1, 0.7, 0, 0, 0 }, 
  { 0, 1, 0.01, 0, 0, 0 }, 
  { 0, 1, 0.5, 0, 0, 0 }, 
  { 0, 1, 0.01, 0, 0, 0 }, 
  { 0, 1, 0, 0, 0, 0 }, 
  { 0, 1, 0.01, 0, 0, 0 }, 
  { 0, 1, 0.5, 0, 0, 0 }, 
  { 0, 1, 0.01, 0, 0, 0 }, 
  { 0, 1, 1, 0, 0, 0 }, 
  { 0, 1, 0.1, 0, 0, 0 }, 
  { 0, 1, 0.9, 0, 0, 0 }, 
  { 0, 1, 0.1, 0, 0, 0 }, 
  { 0, 1, 0.8, 0, 0, 0 }, 
  { 0, 1, 0.01, 0, 0, 0 }, 
  { 0, 1, 0.7, 0, 0, 0 }, 
  { 0, 1, 0.01, 0, 0, 0 }, 
  { 0, 1, 0.5, 0, 0, 0 }, 
  { 0, 1, 0.01, 0, 0, 0 }, 
  { 0, 1, 0, 0, 0, 0 }, 
  { 0, 1, 0.01, 0, 0, 0 }, 
  { 0, 1, 0.5, 0, 0, 0 }, 
  { 0, 1, 0.01, 0, 0, 0 }, 
  { 0, 1, 1, 0, 0, 0 }, 
  { 0, 1, 0.1, 0, 0, 0 }, 
  { 0, 1, 0.9, 0, 0, 0 }, 
  { 0, 1, 0.1, 0, 0, 0 }, 
  { 0, 1, 0.8, 0, 0, 0 }, 
  { 0, 1, 0.01, 0, 0, 0 }, 
  { 0, 1, 0.7, 0, 0, 0 }, 
  { 0, 1, 0.01, 0, 0, 0 }, 
  { 0, 1, 0.5, 0, 0, 0 }, 
  { 0, 1, 0.01, 0, 0, 0 }, 
  { 0, 1, 0, 0, 0, 0 }, 
  { 0, 1, 0.01, 0, 0, 0 }, 
  { 0, 1, 0.5, 0, 0, 0 }, 
  { 0, 1, 0.01, 0, 0, 0 }, 
  { 0, 1, 1, 0, 0, 0 }, 
  { 0, 1, 0.1, 0, 0, 0 }, 
  { 0, 1, 0.9, 0, 0, 0 }, 
  { 0, 1, 0.1, 0, 0, 0 }, 
  { 0, 1, 0.8, 0, 0, 0 }, 
  { 0, 1, 0.01, 0, 0, 0 }, 
  { 0, 1, 0.7, 0, 0, 0 }, 
  { 0, 1, 0.01, 0, 0, 0 }, 
  { 0, 1, 0.5, 0, 0, 0 }, 
  { 0, 1, 0.01, 0, 0, 0 }, 
  { 0, 1, 0, 0, 0, 0 }, 
  { 0, 1, 0.01, 0, 0, 0 }, 
  { 0, 1, 0.5, 0, 0, 0 }, 
  { 0, 1, 0.01, 0, 0, 0 }, 
  { 0, 1, 1, 0, 0, 0 }, 
  { 0, 1, 0.1, 0, 0, 0 }, 
  { 0, 1, 0.9, 0, 0, 0 }, 
  { 0, 1, 0.1, 0, 0, 0 }, 
  { 0, 1, 0.8, 0, 0, 0 }, 
  { 0, 1, 0.01, 0, 0, 0 }, 
  { 0, 1, 0.7, 0, 0, 0 }, 
  { 0, 1, 0.01, 0, 0, 0 }, 
  { 0, 1, 0.5, 0, 0, 0 }, 
  { 0, 1, 0.01, 0, 0, 0 }, 
  { -3.40282e+38, 3.40282e+38, -3.40282e+38, 0, 0, 0 }, 
};


#endif /* ams_lv__dynamicwaves___ttl_hpp */

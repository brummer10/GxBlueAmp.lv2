// generated from file './/sarrisbluesamp.dsp' by dsp2cc:
// Code generated with Faust 2.15.11 (https://faust.grame.fr)

#include "sarrisbluesamp_table.h"

namespace blueamp {

class Dsp: public PluginLV2 {
private:
	uint32_t fSamplingFreq;
	double fConst0;
	double fConst1;
	double fConst2;
	double fConst3;
	double fConst4;
	double fConst5;
	double fConst6;
	double fConst7;
	double fConst8;
	double fConst9;
	double fConst10;
	double fConst11;
	double fConst12;
	double fConst13;
	double fConst14;
	FAUSTFLOAT fVslider0;
	FAUSTFLOAT	*fVslider0_;
	double fRec2[2];
	double fConst15;
	double fConst16;
	FAUSTFLOAT fVslider1;
	FAUSTFLOAT	*fVslider1_;
	double fRec4[2];
	double fConst17;
	double fConst18;
	FAUSTFLOAT fVslider2;
	FAUSTFLOAT	*fVslider2_;
	double fRec6[2];
	double fConst19;
	double fConst20;
	double fConst21;
	double fConst22;
	double fConst23;
	double fConst24;
	double fConst25;
	double fConst26;
	double fConst27;
	double fConst28;
	double fConst29;
	double fConst30;
	double fConst31;
	double fConst32;
	double fConst33;
	double fConst34;
	double fConst35;
	double fConst36;
	double fConst37;
	double fConst38;
	double fConst39;
	double fConst40;
	double fConst41;
	double fConst42;
	double fConst43;
	double fConst44;
	double fConst45;
	double fConst46;
	double fConst47;
	double fConst48;
	double fConst49;
	double fConst50;
	double fConst51;
	double fConst52;
	double fConst53;
	double fConst54;
	double fConst55;
	double fRec5[5];
	double fConst56;
	double fConst57;
	double fConst58;
	double fConst59;
	double fConst60;
	double fConst61;
	double fConst62;
	double fConst63;
	double fConst64;
	double fConst65;
	double fConst66;
	double fConst67;
	double fConst68;
	double fConst69;
	double fConst70;
	double fConst71;
	double fConst72;
	double fConst73;
	double fConst74;
	double fConst75;
	double fConst76;
	double fConst77;
	double fConst78;
	double fConst79;
	double fConst80;
	double fConst81;
	double fConst82;
	double fConst83;
	double fConst84;
	double fConst85;
	double fRec3[5];
	double fConst86;
	double fConst87;
	double fConst88;
	double fConst89;
	double fConst90;
	double fConst91;
	double fConst92;
	double fConst93;
	double fConst94;
	double fConst95;
	double fConst96;
	double fConst97;
	double fConst98;
	double fRec1[6];
	double fConst99;
	double fConst100;
	double fConst101;
	double fConst102;
	double fConst103;
	double fConst104;
	double fConst105;
	double fConst106;
	double fConst107;
	double fRec0[3];

	void connect(uint32_t port,void* data);
	void clear_state_f();
	void init(uint32_t samplingFreq);
	void compute(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0);

	static void clear_state_f_static(PluginLV2*);
	static void init_static(uint32_t samplingFreq, PluginLV2*);
	static void compute_static(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0, PluginLV2*);
	static void del_instance(PluginLV2 *p);
	static void connect_static(uint32_t port,void* data, PluginLV2 *p);
public:
	Dsp();
	~Dsp();
};



Dsp::Dsp()
	: PluginLV2() {
	version = PLUGINLV2_VERSION;
	id = "sarrisbluesamp";
	name = N_("sarrisbluesamp");
	mono_audio = compute_static;
	stereo_audio = 0;
	set_samplerate = init_static;
	activate_plugin = 0;
	connect_ports = connect_static;
	clear_state = clear_state_f_static;
	delete_instance = del_instance;
}

Dsp::~Dsp() {
}

inline void Dsp::clear_state_f()
{
	for (int l0 = 0; (l0 < 2); l0 = (l0 + 1)) fRec2[l0] = 0.0;
	for (int l1 = 0; (l1 < 2); l1 = (l1 + 1)) fRec4[l1] = 0.0;
	for (int l2 = 0; (l2 < 2); l2 = (l2 + 1)) fRec6[l2] = 0.0;
	for (int l3 = 0; (l3 < 5); l3 = (l3 + 1)) fRec5[l3] = 0.0;
	for (int l4 = 0; (l4 < 5); l4 = (l4 + 1)) fRec3[l4] = 0.0;
	for (int l5 = 0; (l5 < 6); l5 = (l5 + 1)) fRec1[l5] = 0.0;
	for (int l6 = 0; (l6 < 3); l6 = (l6 + 1)) fRec0[l6] = 0.0;
}

void Dsp::clear_state_f_static(PluginLV2 *p)
{
	static_cast<Dsp*>(p)->clear_state_f();
}

inline void Dsp::init(uint32_t samplingFreq)
{
	fSamplingFreq = samplingFreq;
	fConst0 = std::min<double>(192000.0, std::max<double>(1.0, double(fSamplingFreq)));
	fConst1 = (2.5566333013108602e-10 * fConst0);
	fConst2 = (1.0 / (((fConst1 + 8.5453531252905294e-06) * fConst0) + 0.00077473736403359402));
	fConst3 = (3.4088103136446602e-06 * fConst0);
	fConst4 = (0.0 - fConst3);
	fConst5 = (1.3569975558518501e-25 * fConst0);
	fConst6 = (((((((((fConst5 + 4.09580555708428e-20) * fConst0) + 4.0415141382146797e-15) * fConst0) + 1.30059353723506e-10) * fConst0) + 2.8655478473702498e-08) * fConst0) + 9.4207799805970992e-06);
	fConst7 = (fConst0 / fConst6);
	fConst8 = (9.5567872929825002e-15 * fConst0);
	fConst9 = ((fConst8 + 1.88950987071309e-10) * fConst0);
	fConst10 = (fConst9 + 8.2310299995418693e-08);
	fConst11 = mydsp_faustpower2_f(fConst0);
	fConst12 = (1.26524622292948e-20 * fConst0);
	fConst13 = (((((((fConst12 + 8.4143587266700193e-15) * fConst0) + 9.8711567710721905e-13) * fConst0) + 8.1713581835931502e-12) * fConst0) + 1.7477348248513602e-11);
	fConst14 = (fConst11 / fConst13);
	fConst15 = (1.57129335819746e-19 * fConst0);
	fConst16 = (((fConst15 + 5.23901537288067e-14) * fConst0) + 4.5694851862293203e-12);
	fConst17 = (3.69586523008772e-17 * fConst11);
	fConst18 = (1.4323098706639e-12 - fConst17);
	fConst19 = (1.47834609203509e-18 * fConst0);
	fConst20 = (((-4.1186422076820299e-16 - fConst19) * fConst11) + 4.02315015690486e-13);
	fConst21 = (1.4324994018876501e-18 * fConst0);
	fConst22 = (fConst21 + 5.3716261353751802e-17);
	fConst23 = (9.1693380294878206e-20 * fConst0);
	fConst24 = (fConst23 + 7.1671187979460399e-17);
	fConst25 = (((-4.8119685635521401e-16 - fConst19) * fConst11) + 4.02315015690486e-13);
	fConst26 = ((fConst21 + 4.3504575708231e-16) * fConst11);
	fConst27 = (2.2175191380526301e-18 * fConst11);
	fConst28 = (fConst27 + -2.59603843455905e-14);
	fConst29 = (2.1487491028314698e-18 * fConst11);
	fConst30 = (8.9403336820107907e-16 - fConst29);
	fConst31 = (1.7880667364021601e-15 - (1.3754007044231701e-19 * fConst11));
	fConst32 = (fConst27 + -2.7748451081992599e-14);
	fConst33 = (1.07284004184129e-14 - fConst29);
	fConst34 = (fConst17 + -1.4323098706639e-12);
	fConst35 = (((4.1186422076820299e-16 - fConst19) * fConst11) + -4.02315015690486e-13);
	fConst36 = (fConst21 + -5.3716261353751802e-17);
	fConst37 = (fConst23 + -7.1671187979460399e-17);
	fConst38 = (((4.8119685635521401e-16 - fConst19) * fConst11) + -4.02315015690486e-13);
	fConst39 = ((fConst21 + -4.3504575708231e-16) * fConst11);
	fConst40 = (1.84793261504386e-17 * fConst0);
	fConst41 = (((1.11919176453849e-14 - fConst40) * fConst0) + -7.1615493533195099e-13);
	fConst42 = (3.6958652300877202e-19 * fConst0);
	fConst43 = (((((fConst42 + -2.0593211038410201e-16) * fConst0) + 1.29801921727952e-14) * fConst0) + -2.01157507845243e-13);
	fConst44 = (3.5812485047191199e-19 * fConst0);
	fConst45 = (((2.6858130676875901e-17 - fConst44) * fConst0) + -4.4701668410054003e-16);
	fConst46 = (2.29233450737195e-20 * fConst0);
	fConst47 = (((3.5835593989730199e-17 - fConst46) * fConst0) + -8.9403336820107907e-16);
	fConst48 = (((((fConst42 + -2.4059842817760701e-16) * fConst0) + 1.38742255409963e-14) * fConst0) + -2.01157507845243e-13);
	fConst49 = ((((2.17522878541155e-16 - fConst44) * fConst0) + -5.3642002092064697e-15) * fConst0);
	fConst50 = (((fConst40 + 1.11919176453849e-14) * fConst0) + 7.1615493533195099e-13);
	fConst51 = (((((fConst42 + 2.0593211038410201e-16) * fConst0) + 1.29801921727952e-14) * fConst0) + 2.01157507845243e-13);
	fConst52 = (((-2.6858130676875901e-17 - fConst44) * fConst0) + -4.4701668410054003e-16);
	fConst53 = (((-3.5835593989730199e-17 - fConst46) * fConst0) + -8.9403336820107907e-16);
	fConst54 = (((((fConst42 + 2.4059842817760701e-16) * fConst0) + 1.38742255409963e-14) * fConst0) + 2.01157507845243e-13);
	fConst55 = ((((-2.17522878541155e-16 - fConst44) * fConst0) + -5.3642002092064697e-15) * fConst0);
	fConst56 = (2.1358743428483702e-15 * fConst0);
	fConst57 = (((-5.6244691028340499e-13 - fConst56) * fConst0) + -7.11958114282795e-12);
	fConst58 = (1.06793717142419e-15 * fConst0);
	fConst59 = ((fConst58 + 1.42391622856559e-14) * fConst0);
	fConst60 = (4.2717486856967401e-17 * fConst0);
	fConst61 = (((-1.01810010342439e-14 - fConst60) * fConst0) + -1.28152460570903e-13);
	fConst62 = (2.1358743428483701e-17 * fConst0);
	fConst63 = ((fConst62 + 2.84783245713118e-16) * fConst0);
	fConst64 = (4.2717486856967404e-15 * fConst11);
	fConst65 = (fConst64 + -1.42391622856559e-11);
	fConst66 = (1.7086994742787e-16 * fConst0);
	fConst67 = (fConst66 + 2.03620020684878e-14);
	fConst68 = (8.5434973713934901e-17 * fConst0);
	fConst69 = (-5.6956649142623601e-16 - fConst68);
	fConst70 = (2.5630492114180601e-13 - (2.5630492114180501e-16 * fConst11));
	fConst71 = (1.2815246057090201e-16 * fConst11);
	fConst72 = (1.42391622856559e-11 - fConst64);
	fConst73 = (2.1358743428483702e-15 * fConst11);
	fConst74 = (fConst66 + -2.03620020684878e-14);
	fConst75 = (5.6956649142623601e-16 - fConst68);
	fConst76 = (((fConst56 + -5.6244691028340499e-13) * fConst0) + 7.11958114282795e-12);
	fConst77 = ((1.42391622856559e-14 - fConst58) * fConst0);
	fConst78 = (((1.01810010342439e-14 - fConst60) * fConst0) + -1.28152460570903e-13);
	fConst79 = ((fConst62 + -2.84783245713118e-16) * fConst0);
	fConst80 = (1.0 / fConst13);
	fConst81 = (5.0609848917179201e-20 * fConst0);
	fConst82 = (((((-1.6828717453340001e-14 - fConst81) * fConst11) + 1.63427163671863e-11) * fConst0) + 6.9909392994054497e-11);
	fConst83 = ((((7.5914773375768795e-20 * fConst11) + -1.9742313542144401e-12) * fConst11) + 1.04864089491082e-10);
	fConst84 = (((((1.6828717453340001e-14 - fConst81) * fConst11) + -1.63427163671863e-11) * fConst0) + 6.9909392994054497e-11);
	fConst85 = (((((((fConst12 + -8.4143587266700193e-15) * fConst0) + 9.8711567710721905e-13) * fConst0) + -8.1713581835931502e-12) * fConst0) + 1.7477348248513602e-11);
	fConst86 = (6.28517343278984e-19 * fConst0);
	fConst87 = ((-1.04780307457613e-13 - fConst86) * fConst0);
	fConst88 = ((9.4277601491847509e-19 * fConst11) + -9.1389703724586406e-12);
	fConst89 = ((1.04780307457613e-13 - fConst86) * fConst0);
	fConst90 = (((fConst15 + -5.23901537288067e-14) * fConst0) + 4.5694851862293203e-12);
	fConst91 = (1.0 / fConst6);
	fConst92 = (6.7849877792592504e-25 * fConst0);
	fConst93 = (((((((((-1.2287416671252801e-19 - fConst92) * fConst0) + -4.0415141382146797e-15) * fConst0) + 1.30059353723506e-10) * fConst0) + 8.5966435421107598e-08) * fConst0) + 4.7103899902985503e-05);
	fConst94 = (1.3569975558518501e-24 * fConst0);
	fConst95 = (((((((((fConst94 + 8.1916111141685601e-20) * fConst0) + -8.0830282764293594e-15) * fConst0) + -2.6011870744701201e-10) * fConst0) + 5.7310956947405103e-08) * fConst0) + 9.4207799805971006e-05);
	fConst96 = (((((((((8.1916111141685601e-20 - fConst94) * fConst0) + 8.0830282764293594e-15) * fConst0) + -2.6011870744701201e-10) * fConst0) + -5.7310956947405103e-08) * fConst0) + 9.4207799805971006e-05);
	fConst97 = (((((((((fConst92 + -1.2287416671252801e-19) * fConst0) + 4.0415141382146797e-15) * fConst0) + 1.30059353723506e-10) * fConst0) + -8.5966435421107598e-08) * fConst0) + 4.7103899902985503e-05);
	fConst98 = (((((((((4.09580555708428e-20 - fConst5) * fConst0) + -4.0415141382146797e-15) * fConst0) + 1.30059353723506e-10) * fConst0) + -2.8655478473702498e-08) * fConst0) + 9.4207799805970992e-06);
	fConst99 = ((1.88950987071309e-10 - fConst8) * fConst0);
	fConst100 = (fConst99 + 2.4693089998625597e-07);
	fConst101 = (1.9113574585965e-14 * fConst0);
	fConst102 = (((-3.7790197414261702e-10 - fConst101) * fConst0) + 1.6462059999083699e-07);
	fConst103 = (((fConst101 + -3.7790197414261702e-10) * fConst0) + -1.6462059999083699e-07);
	fConst104 = (fConst9 + -2.4693089998625597e-07);
	fConst105 = (fConst99 + -8.2310299995418693e-08);
	fConst106 = (0.00154947472806719 - (5.1132666026217101e-10 * fConst11));
	fConst107 = (((fConst1 + -8.5453531252905294e-06) * fConst0) + 0.00077473736403359402);
	fVslider0 = FAUSTFLOAT(0.5);
	fVslider1 = FAUSTFLOAT(0.5);
	fVslider2 = FAUSTFLOAT(0.5);
	clear_state_f();
}

void Dsp::init_static(uint32_t samplingFreq, PluginLV2 *p)
{
	static_cast<Dsp*>(p)->init(samplingFreq);
}

void always_inline Dsp::compute(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0)
{
#define fVslider0 (*fVslider0_)
#define fVslider1 (*fVslider1_)
#define fVslider2 (*fVslider2_)
	double fSlow0 = (0.00036676987543879196 * (std::exp((3.0 * double(fVslider0))) + -1.0));
	double fSlow1 = (0.00036676987543879196 * (std::exp((3.0 * double(fVslider1))) + -1.0));
	double fSlow2 = (0.00036676987543879196 * (std::exp((3.0 * double(fVslider2))) + -1.0));
	for (int i = 0; (i < count); i = (i + 1)) {
		fRec2[0] = (fSlow0 + (0.99299999999999999 * fRec2[1]));
		fRec4[0] = (fSlow1 + (0.99299999999999999 * fRec4[1]));
		fRec6[0] = (fSlow2 + (0.99299999999999999 * fRec6[1]));
		double fTemp0 = ((fConst0 * (fConst50 + ((fRec6[0] * (fConst51 + (fConst0 * ((fConst52 * fRec6[0]) + (fConst53 * fRec4[0]))))) + (fRec4[0] * (fConst54 + (fConst55 * fRec4[0])))))) + 1.1175417102513499e-11);
		fRec5[0] = (double(input0[i]) - (((((fRec5[1] * ((fConst0 * (fConst18 + ((fRec6[0] * (fConst20 + (fConst11 * ((fConst22 * fRec6[0]) + (fConst24 * fRec4[0]))))) + (fRec4[0] * (fConst25 + (fConst26 * fRec4[0])))))) + 4.4701668410053997e-11)) + (fRec5[2] * ((fConst11 * (((fRec6[0] * (fConst28 + ((fConst30 * fRec6[0]) + (fConst31 * fRec4[0])))) + (fRec4[0] * (fConst32 + (fConst33 * fRec4[0])))) + -2.2383835290769698e-14)) + 6.7052502615080906e-11))) + (fRec5[3] * ((fConst0 * (fConst34 + ((fRec6[0] * (fConst35 + (fConst11 * ((fConst36 * fRec6[0]) + (fConst37 * fRec4[0]))))) + (fRec4[0] * (fConst38 + (fConst39 * fRec4[0])))))) + 4.4701668410053997e-11))) + (fRec5[4] * ((fConst0 * (fConst41 + ((fRec6[0] * (fConst43 + (fConst0 * ((fConst45 * fRec6[0]) + (fConst47 * fRec4[0]))))) + (fRec4[0] * (fConst48 + (fConst49 * fRec4[0])))))) + 1.1175417102513499e-11))) / fTemp0));
		fRec3[0] = ((0.5 * double(sarrisbluesampclip(double((fConst0 * ((fRec4[0] * (((((fRec5[0] * ((fConst57 + (fConst59 * fRec4[0])) + (fConst0 * (fRec6[0] * ((fConst61 + (fConst63 * fRec4[0])) + (fConst63 * fRec6[0])))))) + (fRec5[1] * ((fConst65 + (fConst11 * (0.0 - (2.1358743428483702e-15 * fRec4[0])))) + (fConst11 * (fRec6[0] * ((fConst67 + (fConst69 * fRec4[0])) + (fConst69 * fRec6[0]))))))) + (fConst0 * (fRec5[2] * (((0.0 - (2.8478324571311799e-14 * fRec4[0])) + 1.12489382056681e-12) + (fRec6[0] * ((fConst70 + (fConst71 * fRec4[0])) + (fConst71 * fRec6[0]))))))) + (fRec5[3] * ((fConst72 + (fConst73 * fRec4[0])) + (fConst11 * (fRec6[0] * ((fConst74 + (fConst75 * fRec4[0])) + (fConst75 * fRec6[0]))))))) + (fRec5[4] * ((fConst76 + (fConst77 * fRec4[0])) + (fConst0 * (fRec6[0] * ((fConst78 + (fConst79 * fRec4[0])) + (fConst79 * fRec6[0])))))))) / fTemp0)))))) - (fConst80 * ((((fConst82 * fRec3[1]) + (fConst83 * fRec3[2])) + (fConst84 * fRec3[3])) + (fConst85 * fRec3[4]))));
		fRec1[0] = ((fConst14 * (fRec2[0] * (((((fConst16 * fRec3[0]) + (fConst87 * fRec3[1])) + (fConst88 * fRec3[2])) + (fConst89 * fRec3[3])) + (fConst90 * fRec3[4])))) - (fConst91 * (((((fConst93 * fRec1[1]) + (fConst95 * fRec1[2])) + (fConst96 * fRec1[3])) + (fConst97 * fRec1[4])) + (fConst98 * fRec1[5]))));
		fRec0[0] = ((fConst7 * ((((((fConst10 * fRec1[0]) + (fConst100 * fRec1[1])) + (fConst102 * fRec1[2])) + (fConst103 * fRec1[3])) + (fConst104 * fRec1[4])) + (fConst105 * fRec1[5]))) - (fConst2 * ((fConst106 * fRec0[1]) + (fConst107 * fRec0[2]))));
		output0[i] = FAUSTFLOAT((fConst2 * ((fConst4 * fRec0[2]) + (fConst3 * fRec0[0]))));
		fRec2[1] = fRec2[0];
		fRec4[1] = fRec4[0];
		fRec6[1] = fRec6[0];
		for (int j0 = 4; (j0 > 0); j0 = (j0 - 1)) {
			fRec5[j0] = fRec5[(j0 - 1)];
		}
		for (int j1 = 4; (j1 > 0); j1 = (j1 - 1)) {
			fRec3[j1] = fRec3[(j1 - 1)];
		}
		for (int j2 = 5; (j2 > 0); j2 = (j2 - 1)) {
			fRec1[j2] = fRec1[(j2 - 1)];
		}
		fRec0[2] = fRec0[1];
		fRec0[1] = fRec0[0];
	}
#undef fVslider0
#undef fVslider1
#undef fVslider2
}

void __rt_func Dsp::compute_static(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0, PluginLV2 *p)
{
	static_cast<Dsp*>(p)->compute(count, input0, output0);
}


void Dsp::connect(uint32_t port,void* data)
{
	switch ((PortIndex)port)
	{
	case MASTER: 
		fVslider0_ = (float*)data; // , 0.5, 0.0, 1.0, 0.01 
		break;
	case TONE: 
		fVslider2_ = (float*)data; // , 0.5, 0.0, 1.0, 0.01 
		break;
	case VOLUME: 
		fVslider1_ = (float*)data; // , 0.5, 0.0, 1.0, 0.01 
		break;
	default:
		break;
	}
}

void Dsp::connect_static(uint32_t port,void* data, PluginLV2 *p)
{
	static_cast<Dsp*>(p)->connect(port, data);
}


PluginLV2 *plugin() {
	return new Dsp();
}

void Dsp::del_instance(PluginLV2 *p)
{
	delete static_cast<Dsp*>(p);
}

/*
typedef enum
{
   MASTER, 
   TONE, 
   VOLUME, 
} PortIndex;
*/

} // end namespace sarrisbluesamp

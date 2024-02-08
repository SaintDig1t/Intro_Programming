//============================================================================
// FileName : codeEthics.cpp
// Name : Henry M. Rivera Osso
// Student Number : Y00575252
// Course : COEN 2210
//============================================================================

#include <iostream>
#include <string>

using namespace std;
int main (void){
    // BUILDING BLOCKS OF PROGRAM AS STRINGS
    string liner = "-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
    string line1 = "|Canon 1 = Velar por sobre toda otra consideración por la seguridad, el ambiente, la salud y el bienestar de la comunidad en la ejecucion de sus responsabilidades profesionales.                                                                            |\n";
    string line2 = "|Canon 2 = Proveer servicios unicamente en areas de sus competencias                                                                                                                                                                                         |\n";
    string line3 = "|Canon 3 = Emitir declaraciones publicas unicamente en una forma veraz y objetiva                                                                                                                                                                            |\n";
    string line4 = "|Canon 4 = Actuar en asuntos profesionales para cada patrono o cliente como agentes fieles o fiduciarios, y evitar conflictos de intereses o la mera apariencia de estos, manteniendo siempre la independencia de criterio como base del profesionalismo.    |\n";
    string line5 = "|Canon 5 = Edificar su reputacion profesional en el merito de sus servicios y no competir deslealmente con otros.                                                                                                                                            |\n";
    string line6 = "|Canon 6 = No  incurrir  en  actos  enganosos  en  la  solicitud  de  empleo  y  en  el  ofrecimiento  de  servicios profesionales                                                                                                                           |\n";
    string line7 = "|Canon 7 = Actuar con el decoro que sostenga y realce el honor, la integridad y la dignidad de sus profesiones.                                                                                                                                              |\n";
    string line8 = "|Canon 8 = Asociarse unicamente con personas u organizaciones de buena reputacion                                                                                                                                                                            |\n";
    string line9 = "|Canon 9 = Continuar su desarrollo profesional a lo largo de sus carreras y promover oportunidades para el desarrollo profesional y etico de los ingenieros y agrimensores bajo su supervision.                                                              |\n";
    string line10 = "|Canon 10 = Conducirse y aceptar realizar gestiones profesionales unicamente en conformidad con las leyes y los reglamentos aplicables y con estos Canones.                                                                                                  |\n";
// Unifying the elements from the previous steps to build the chart
    string chartBuild = liner + line1 + liner + line2 + liner +line3 +liner +line4 + liner +line5 + liner +line6 + liner +line7 +liner +line8 + liner +line9 +liner +line10 +liner;

//console output of the final code once unified
    cout << chartBuild;
    return 0;
}

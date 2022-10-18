//---------------------------------------------------------------------------

#ifndef UPrincipalH
#define UPrincipalH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Grids.hpp>
#include <Vcl.Menus.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TStringGrid *SGVector;
	TLabel *Label1;
	TButton *Button1;
	TEdit *EDimensión;
	TMainMenu *MainMenu1;
	TMenuItem *Funciones1;
	TMenuItem *Procedimientos1;
	TMenuItem *ContarElemento1;
	TEdit *EResultado;
	TLabel *Resultado;
	TEdit *EElemento;
	TLabel *Label2;
	TMenuItem *EliminarElempos1;
	TEdit *EPosicion;
	TLabel *Label3;
	TMenuItem *Busquedas1;
	TMenuItem *BsquedaSecuencial1;
	TMenuItem *Binaria1;
	TMenuItem *LlenarVector1;
	TMenuItem *DibujarVector1;
	TMenuItem *Ordenar1;
	TMenuItem *Intercambio1;
	TMenuItem *Burbuja1;
	TMenuItem *Seleccin1;
	TStringGrid *SGVecB;
	TLabel *Label4;
	TMenuItem *LlenarVectorB1;
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall ContarElemento1Click(TObject *Sender);
	void __fastcall EliminarElempos1Click(TObject *Sender);
	void __fastcall BsquedaSecuencial1Click(TObject *Sender);
	void __fastcall Binaria1Click(TObject *Sender);
	void __fastcall LlenarVector1Click(TObject *Sender);
	void __fastcall DibujarVector1Click(TObject *Sender);
	void __fastcall Intercambio1Click(TObject *Sender);
	void __fastcall Burbuja1Click(TObject *Sender);
	void __fastcall Seleccin1Click(TObject *Sender);
	void __fastcall LlenarVectorB1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
	void SGACVector(TStringGrid *SG, CVector *CV);
	void CVectorASG(CVector *CV, TStringGrid *SG);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif

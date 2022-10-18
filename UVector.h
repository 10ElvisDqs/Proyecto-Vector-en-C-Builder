//---------------------------------------------------------------------------

#ifndef UVectorH
#define UVectorH
//---------------------------------------------------------------------------

const max=100;
class CVector
{  private:
	 int V[max];
	 int n;
	 TCanvas *Lienzo;
	 int ix, iy;
	 int GetN();
	 void SetN(int valor);
	 int GetElem(int pos);
	 void SetElem(int pos, int valor);
	 void DibujarLinea(int x,int y,int elem);
   public:
	 CVector(TCanvas *CV, int x, int y);
	 __property int Dimension={read=GetN, write=SetN};
	 __property int Celda[int pos]={read=GetElem, write=SetElem};
	 int ContarElem(int elem);
	 void ElemiinarElemPos(int pos);
	 void InsertarElemPos(int pos, int elem);
	 int BusquedaSecuencial(int elem);
	 int BusquedaBinaria(int elem);
	 void LlenarVector();
	 void DibujarVector();
	 void Intercambiar(int pos1, int pos2);
	 void OrdenarIntercambio();
	 void OrdenarBurbuja();
	 void OrdenarSeleccion();

};

#endif

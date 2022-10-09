#include <iostream>
using namespace std;

class nokta{
	public:
		int a,b;
		void degerata(int x,int y){
			a=x;
			b=y;
			
		}
		void ekranayazdir(){
			cout<< a <<" , "<< b<<endl;
		}
		bool baslangictami(){
			if(a==0&&b==0){
				cout<<" a ve b baslangictadir"<<endl;
			}else
			cout<<"a ve b baslangicta degildir"<<endl;
		}
};

int main(int argc, char** argv) {
	nokta n;
	n.degerata(0,0);
	n.ekranayazdir();
	n.baslangictami();
	
	
	return 0;
}

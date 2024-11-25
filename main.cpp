#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    float tempiV, tempiH, giroV, giroH;
    string vincitore, giroveloce;
    cout<<"Inserire il numero di giri nella gara: ";
    cin>>n;
    vector<float> verstappen(n),hamilton(n);

    for(int i = 0; i < n; i++){
        cout<<"Inserire il "<<i+1<<"° tempo di Verstappen: ";
        cin>>verstappen[i];
        cout<<"Inserire il "<<i+1<<"° tempo di Hamilton : ";
        cin>>hamilton[i];
    }

    tempiH = 0;
    tempiV = 0;

    for(int i = 0; i < n; i++){
        tempiH = tempiH + hamilton[i];
        tempiV = tempiV + verstappen[i];
    }

    if(tempiH > tempiV){
        vincitore = "Verstappen";
    }else{
        if(tempiH == tempiV){
            vincitore = "Nessuno";
        }else{
            vincitore = "Hamilton";
        }
    }

    giroV = verstappen[0];
    giroH = hamilton[0];

    for(int i = 0; i < n; i++){
        if(giroV < verstappen[i]){
            giroV = verstappen[i];
        }
        if(giroH < hamilton[i]){
            giroH = hamilton[i];
        }
    }

    if(giroH > giroV){
        giroveloce = "Verstappen";
    }else{
        if(giroH == giroV){
            giroveloce = "Nessuno";
        }else{
            giroveloce = "Hamilton";
        }
    }

    cout<<"Il vincitore della gara è: "<<vincitore<<"; Il miglior tempo è stato registrato da: "<<giroveloce<<endl;

    return 0;
}

//LEGGERE LE ISTRUZIONI NEL FILE README.md

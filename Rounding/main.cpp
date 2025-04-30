#include <iostream>
#include <cmath>
using namespace std;



int main(){
    int arr1[] = {
        0, 1868600507, 0, 1355385216, -1045569501, 1542505884, 709596137, -1728003015,
       569430852, 1688131490, 923019221, -524715778, 1308140487, 2087760098, -32387025, -833995922
    };
    int arr2[] = {
         5476, 40807, -11617, 241408, 214278, 41520, 75410, -5619522,
       -83484, 258460, -1201066, -39916, -119514, 41924, 1650, -64156
    };

    int size = 16;
    float finalarr[size];
    int roundArr[size];

    for (int i = 0; i < size; i++){
        finalarr[i] = (float)arr1[i] / arr2[i];
    }

    for (int i = 0; i < size; i++){
        roundArr[i] = round(finalarr[i]);
    }
    for (int i = 0; i < size; i++){
        cout << roundArr[i] << " ";
    }
    return 0;
}


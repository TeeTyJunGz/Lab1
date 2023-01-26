#include <iostream>

using namespace std;

void Nay(int arr[], int len){

    cout << "arr = " << arr[25] << "\n";
    cout << "len = " << len << "\n";

    int x,y;
    for (int i = 0; i < len; i++){
        int path = arr[i];
        switch (path)
        {
        case 1:
            y += 1;
            break;
        case 2:
            x -= 1;
            break;
        case 3:
            y -= 1;
            break;
        case 4:
            x += 1;
            break;
        }
        if (x == 0 && y == 0){
            x,y = 1;
        }
    }
    cout << x << ", " << y << "\n";
}

int main(){
    int arr[] = {1, 2, 1, 3, 1, 2, 2, 1, 3, 2, 4, 1, 2, 3, 1, 4, 1, 2, 1, 3, 1, 2, 1, 1, 4};
    int len = sizeof(arr);
    cout << "len = " << len;
    int x,y = 0;
    for (int i = 0; i < len; i++){
        int path = arr[i];
        switch (path)
        {
        case 1:
            y += 1;
            break;
        case 2:
            x -= 1;
            break;
        case 3:
            y -= 1;
            break;
        case 4:
            x += 1;
            break;
        }
        if (x == 0 && y == 0){
            x,y = 1;
        }

    return 0;
}






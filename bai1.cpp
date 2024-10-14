#include <iostream>

using namespace std;

void sortArray(int a[], int n)
{
    for(int i = 0; i < n -1; i++){
        int min = i;
        for(int j = i; j < n; j++){
            if(a[j] <= a[min]){
                min = j;
            }
        }
        int tmp = a[min];
        a[min] = a[i];
        a[i] = tmp;
    }

}

int main()
{
    int n; cin >> n;
    int a[n];
    cout << "Mau do: 0\nMau trang: 1\nMau xanh: 2\n";
    cout << "Nhap phan tu trong mang : \n";

    for(int i = 0; i < n; i++) cin >> a[i];

    sortArray(a, n);
    for(int i = 0; i < n; i++)
    {
        if(a[i] == 0) cout << "mau do ";
        else if(a[i] == 1) cout << "mau trang ";
        else cout << "mau xanh ";
    }
}
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int arr1[] = {39, 52, 4, 68, 20};
    int n = 5;

    cout << "Puzirkovya sorting: " << endl;
    cout << "Ishod massive: "  << endl;

    for(int i=0;i<n;i++)
    {
        cout << arr1[i] << " ";
    }
    cout << endl;

    for (int i=0; i < n-1; i++)
    {
        for (int j=0; j < n-i-1; j++)
        {
            if (arr1[j] > arr1[j+1])
            {
                int temp = arr1[j];
                arr1[j] = arr1[j+1];
                arr1[j+1] = temp;

                cout << "Меняем " << arr1[j+1] << " и " << arr1[j] << endl;

                for (int k = 0; k < n; k++)
                {
                    cout << arr1[k] << " ";
                } 
                cout << endl;
            } 
        }

        cout << "End of the prohod " << i+1 << endl;
    }

    cout << "REsult: " << endl;
    for(int i=0;i<n;i++)
    {
        cout << arr1[i] << " " <<endl;
    }

    int arr2[] = {46, 528, 2, 3, 218};

    cout << "Finiched sort: " << endl;
    cout << "Ishod mass: " << endl;
    for(int i=0;i<n;i++)
    {
        cout << arr2[i] << " ";
    }
    cout << endl;

    sort(arr2, arr2+n, [](int a, int b)  {
        cout << "Biblioteka sravnivaet: " << a << " and " << b << endl;
        if(a<b)
        {
            cout << "Menshe " <<endl;
            return true;
        }
        else
        {
            cout << "Bolshe " << endl;
            return false;
        }
    });

    cout << "Otsort massive: " << endl;
    for(int i=0;i<n;i++)
    {
        cout << arr2[i] << " ";
    }

}
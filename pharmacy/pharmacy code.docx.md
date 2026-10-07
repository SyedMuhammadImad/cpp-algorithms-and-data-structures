# Text-only document extract

Source document: pharmacy code.docx

Images and layout omitted. Claims below are source text, not independently verified results.

#include <iostream>

using namespace std;

int main()

{

    int choice, quantity;

    float totalPrice, discount;

    int panadol = 10;

    int desprin = 15;

    int koftix = 70;

    int panadolExtra = 20;





    cout<<"Main Menu"<<endl;

    cout<<"Press 1. Panadol"<<endl;

    cout<<"Press 2. Desprin"<<endl;

    cout<<"Press 3. Koftix"<<endl;

    cout<<"Press 4. PanadolExtra"<<endl;

    cout<<"enter....";

    cin>>choice;



    if(choice == 1)

    {

        cout<<"Enter the quantity of Panadol : ";

        cin>>quantity;

        totalPrice = panadol*quantity;

        cout<<"How much discount you want :";

        cin>>discount;



        totalPrice = totalPrice + (totalPrice*0.20f) - discount ;

        cout<<"Total Bill : "<<totalPrice<<endl;



    }

    else

    {

        if(choice == 2)

        {

            cout<<"Enter the quantity of Desprin : ";

            cin>>quantity;

            totalPrice = desprin*quantity;

            cout<<"How much discount you want :";

            cin>>discount;



            totalPrice = totalPrice + (totalPrice*0.20f) - discount ;

            cout<<"Total Bill : "<<totalPrice<<endl;

        }

        else

        {

            if(choice == 3)

            {

                cout<<"Enter the quantity of Koftix : ";

                cin>>quantity;

                totalPrice = koftix*quantity;

                cout<<"How much discount you want :";

                cin>>discount;



                totalPrice = totalPrice + (totalPrice*0.20f) - discount ;

                cout<<"Total Bill : "<<totalPrice<<endl;

            }

            else

            {

                if(choice == 4)

                {

                    cout<<"Enter the quantity of PanadolExtra : ";

                    cin>>quantity;

                    totalPrice = panadolExtra*quantity;

                    cout<<"How much discount you want :";

                    cin>>discount;



                    totalPrice = totalPrice + (totalPrice*0.20f) - discount;

                    cout<<"Total Bill : "<<totalPrice<<endl;

                }

                else

                {

                    cerr<<"Invalid choice"<<endl;

                }

            }





        }

    }



    return 0;

}

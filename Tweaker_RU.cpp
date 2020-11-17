#include <iostream>
#include <time.h>
#include <windows.h>
#include <cstdlib>
#include <stdio.h>


using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");

    int main ;

    int n = 3;


    cout << "\a" << "                       Привет, я программа для отключения всякой шляпы в Windows 10 \n" << "\n";

    Again:
        cout << " Выберите действие : \n " << "\n";

        cout << "1. Отключение обновлений Windows \n " << "\n";

        cout << "2. Отключение Windows Search \n" << "\n";

        cout << "3. Отключение служб Xbox Live \n" << "\n";

        cout << "4. Отключение служб Hyper-V \n" << "\n";

        cout << "5. Отключение служб смарт-карт Microsoft Passport \n" << "\n";

        cout << "6. Отключение ненужных служб (карты , радио , факс , телеметрия , телефония , и другие)\n" << "\n";

        cout << "Для выхода введите '0' \n" << "\n";


        cout << "> ";
        cin >> main; 


    if (main == 1) {
        cout << "\n" ;
        
        system ("sc config wuauserv start= disabled");

        system("sc config WaaSMedicSvc start= disabled ");

        system("cls");

        cout << "\a -Обновления Windows успешно отключены- \n"<< "\n";

        system("pause");

        system ("cls") ;

        goto Again;

        
    }

    else if (main == 2) {
    
        cout << "\n";

        system("sc config WSearch start= disabled");

        system("cls");

        cout << "\a -Поиск Windows успешно отключен- \n" << "\n";

        system("pause");

        system("cls");

        goto Again;
    }

    else if (main == 3) {
    
        cout << "\n";

        system("sc config XboxGipSvc start= disabled");

        system("sc config XblAuthManager start= disabled");

        system("sc config XboxNetApiSvc start= disabled");

        system("sc config XblGameSave start= disabled"); 

        system("sc config xboxgip start= disabled");

        system("cls");

        cout << "\a -Все службы Xbox Live успешно отключены- \n " << "\n";

        system("pause");

        system("cls");

        
        goto Again;
    }

    else if (main == 4) {
    
        cout << "\n";

        system("sc config vmicguestinterface start= disabled");

        system("sc config vmicvmsession start= disabled");

        system("sc config vmicrdv start= disabled");

        system("sc config vmicshutdown start= disabled");
    
        system("sc config vmicvss start= disabled");

        system("sc config vmickvpexchange start= disabled");

        system("sc config vmicheartbeat start= disabled");

        system ("sc config vmictimesync start= disabled");

        system("sc config HvHost start= disabled");

        system("cls");

        cout << "\a -Все службы Hyper-V успешно отключены- \n" << "\n";
        
        system("pause");

        system("cls");

        goto Again;

    }

    else if (main == 5) {
    
        cout << "\n";

        system ("sc config RasMan start= disabled");

        system("sc config NgcCtnrSvc start= disabled");

        system("sc config SessionEnv start= disabled");

        system("sc config SCPolicySvc start= disabled");

        system("sc config SCardSvr start= disabled");

        system("sc config ScDeviceEnum start= disabled");

        system("sc config NgcSvc start= disabled");

        system("cls");

        cout << "\a -Службы успешно отключены- \n" << "\n";

        system("pause");

        system("cls");

        goto Again;

    }

    else if (main == 6) {

    cout << "\n";

    system ("sc config shpamsvc start= disabled");

    system("sc config PolicyAgent start= disabled ");

    system("sc config WbioSrvc start= disabled ");

    system("sc config SEMgrSvc start= disabled ");

    system("sc config MapsBroker start= disabled ");

    system("sc config RemoteAccess start= disabled");

    system("sc config IKEEXT start= disabled");

    system("sc config WpcMonSvc start= disabled");

    system("sc config icssvc start= disabled");

    system("sc config W32Time start= disabled");

    system("sc config lfsvc start= disabled");

    system("sc config SensorDataService start= disabled");

    system("sc config SensorService start= disabled");

    system("sc config RetailDemo start= disabled");

    system("sc config camsvc start= disabled");

    system("sc config perceptionsimulation start= disabled ");

    system("sc config MSiSCSI start= disabled");

    system("sc config WalletService start= disabled");

    system("sc config SensrSvc start= disabled");

    system("sc config NetTcpPortSharing start= disabled");

    system("sc config WPDBusEnum start= disabled");

    system("sc config WerSvc start= disabled");

    system("sc config TabletInputService start= disabled");

    system("sc config WpnService start= disabled");
    
    system("sc config SENS start= disabled ");

    system("sc config RmSvc start= disabled");
    
    system("sc config BDESVC start= disabled ");

    system("sc config diagnosticshub.standardcollector.service start= disabled");

    system ("sc config RemoteRegistry start= disabled");

    system("sc config WdiSystemHost start= disabled");

    system("sc config WdiServiceHost start= disabled");

    system("sc config fax start= disabled ");

    system("sc config BITS start= disabled");

    system("sc config EFS start= disabled");

    system("sc config TapiSrv start= disabled");

    system("sc config PerfHost start= disabled ");  

    system("cls");

    cout << "\a -Службы успешно отключены- \n" << "\n";

    system("pause");

    system("cls");

    goto Again;



    }

    
    
    else if (main == 0) {
        
        system("cls");

        cout << "\a До свидания ! \n" << "\n";
        
        cout << "\n\aЗавершение программы через : \n";
        
        cout << "\n";
        
        while (n != 0) {
            cout << n << "...  ";

            n -= 1;

            Sleep(1000);

            cout << "\t----------------------------------------------------------------\t\n";
            cout << "\n";
        }
    }
    

}


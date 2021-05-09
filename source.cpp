#include <iostream>
#include<string>

using namespace std; // spoiler tag programe
string sentence;
int i=3;
int main () {

    cout << ",------.  ,--.                              ,--.   ,--------.                    ,---.     ,--.   ,--.              " << endl;
    cout << "|  .-.  ` `--' ,---.  ,---. ,---. ,--.--. ,-|  |   '--.  .--',--,--. ,---.      /  O  `  ,-|  | ,-|  | ,---. ,--.--." << endl;
    cout << "|  |  `  :,--.(  .-' | .--'| .-. ||  .--'' .-. |      |  |  ' ,-.  || .-. |    |  .-.  |' .-. |' .-. || .-. :|  .--'" << endl;
    cout << "|  '--'  /|  |.-'  `)` `--.' '-' '|  |   ` `-' |      |  |  ` '-'  |' '-' '    |  | |  |` `-' |` `-' |`   --.|  |   " << endl;
    cout << "`-------' `--'`----'  `---' `---' `--'    `---'       `--'   `--`--'.`-  /     `--' `--' `---'  `---'  `----'`--'   " << endl;
    cout << "                                                                    `---'                                           " << endl;

    cout << "please enter the sentence u wish to add spoiler tags to :" << endl;
    getline(cin, sentence);


    sentence.insert(0,"||");
    int size = sentence.size();

    for(;i<size;){
        
        sentence.insert(i, "||||");
        size = sentence.size();
        i += 5;
    }
    
    sentence += "||" ;
    
    cout << "results :" << endl;
    cout << sentence << endl;

    system("pause");
    return 0;
}

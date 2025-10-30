//Найти все натуральные числа, не превосходящие >= заданного N, которые делятся 
//на каждую из своих цифр. Ответ записать в файл c именем f.txt, располагая по одному числу 
//в строке. Если таких чисел нет, то результирующий файл должен быть создан, но пуст. 
//TextFile14 files - f.txt?
// #include <iostream>
// #include <fstream>
// using namespace std;
// bool Prover(int num){
//     if (num == 0){
//         return false;
//     }
//     int vrem_num = num;
//     while (vrem_num > 0){
//         int digit = vrem_num%10;
//         if (digit == 0 || num % digit != 0){
//             return false;
//         }
//         vrem_num /= 10;
//     }
//     return true;
// }
// int main(){
//     ofstream f2;
//     f2.open("f.txt", ios::out);
//     if (!f2.is_open()){
//         cout << "Error!";
//         return 1;
//     }
//     int n;
//     std::cout << "введите значение N\n";
//     std::cin >> n;
//     for (int i = 0; i < n; i++){
//         if (Prover(i) == true){
//             f2 << i << "\n";
//         }
//     }
//     f2.close();
//     return 0;
// }


//Найдите все числа Фибоначчи с номерами от N1 до N2. Ответ записать в файл c 
//именем b.txt, располагая по одному числу в строке. Рекуррентное соотношение для чисел 
//Фибоначчи: F0 = 0, F1 = 1, Fi = Fi-1+Fi-2 при i>1. 
//TextFile2 file - b.txt
// #include <iostream>
// #include <fstream>
// using namespace std;
// int main(){
//     ofstream f2;
//     long n1, n2;
//     std::cout << "введите n1 and n2\n";
//     std::cin >> n1 >> n2;
//     f2.open("b.txt", ios::out);
//     while (!f2.is_open()){
//         cout << "error";
//         return 1;
//     }
//     long f0 = 0, f1 = 1;
//     if (n1 == 0){
//         f2 << f0 << "\n";
//     }if (n1 <= 1){
//         f2 << f1 << "\n";
//     }
//     long fib = 0;
//     for (long i = 2; i <= n2; i++){
//         fib = f0 + f1;
//         f0 = f1;
//         f1 = fib;
//         if (i >= n1){
//             f2 << fib << "\n";
//         }
//     }
//     f2.close();
//     return 0;
// }

//TextFile16 file - aa.txt
// #include <iostream>
// #include <fstream>
// using namespace std;
// int main() {
//     ifstream f1;
//     f1.open("aa.txt", ios::in);
//     if (!f1.is_open()){
//         std::cout << "error\n";
//         return 1; 
//     }  
//     int n;
//     f1 >> n;
//     bool flag = true;
//     int num;
//     for (int i = 0; i < n; i++){
//         f1 >> num;
//         flag = flag && (num > 0);
//     }
//     f1.close();
//     if (flag){
//         std::cout << "последовательность положительна \n";
//     }else{
//         std::cout << "полжительность не положительна \n";
//     }
//     return 0;
// }

#include <iostream>

using namespace std;

struct Microprocessor {

    string name;
    string company;
    double frequency;
    int contacts;

    Microprocessor(string n, string c, double f, int ct) : name(n), company(c), frequency(f), contacts(ct) {}

};

int main() {

    setlocale(LC_CTYPE, "ukr");

    Microprocessor processors[] = {

        Microprocessor("Pentium", "Intel", 3.2, 478),
        Microprocessor("Celeron", "Intel", 2.8, 478),
        Microprocessor("Duron", "AMD", 2.0, 462),
        Microprocessor("Athlon", "AMD", 3.0, 462)

    };

    cout << "Список мiкропроцесорiв:" << '\n';

    for (const auto& processor : processors) {

        cout << "Назва: " << processor.name << ", Фiрма: " << processor.company << ", Частота: " << processor.frequency << " ГГц, Кiлькiсть контактiв: " << processor.contacts << '\n';

    }

    double maxFrequencyAMD = 0.0;
    int maxFreqIndexAMD = -1;

    for (int i = 0; i < sizeof(processors) / sizeof(processors[0]); ++i) {

        if (processors[i].company == "AMD" && processors[i].frequency > maxFrequencyAMD) {

            maxFrequencyAMD = processors[i].frequency;
            maxFreqIndexAMD = i;

        }
    }

    if (maxFreqIndexAMD != -1) {

        processors[maxFreqIndexAMD].name = "Duron";

    }

    cout << " " << '\n';
    cout << "Оновлений список мiкропроцесорiв:" << '\n';

    for (const auto& processor : processors) {

        cout << "Назва: " << processor.name << ", Фiрма: " << processor.company << ", Частота: " << processor.frequency << " ГГц, Кiлькiсть контактiв: " << processor.contacts << '\n';

    }

    return 0;
}
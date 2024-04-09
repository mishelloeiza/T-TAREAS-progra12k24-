#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>

using namespace std;

void ingresar_datos(vector<string>& candidatos, vector<vector<int>>& votos);
void mostrar_tabla(const vector<string>& candidatos, const vector<vector<int>>& votos);
pair<int, int> calcular_ganador_y_perdedor(const vector<vector<int>>& votos);
bool seguir_calculando();

int main() {
    vector<string> candidatos;
    vector<vector<int>> votos;

    srand(time(0));

    do {
        int num_candidatos;
        cout << "Ingrese el numero de candidatos: ";
        cin >> num_candidatos;

        candidatos.clear();
        votos.clear();

        for (int i = 0; i < num_candidatos; i++) {
            string nombre;
            cout << "Ingrese el nombre del candidato " << i + 1 << ": ";
            cin >> nombre;
            candidatos.push_back(nombre);

            vector<int> voto(5, 0);
            votos.push_back(voto);
        }

        for (int i = 0; i < 50; i++) {
            for (int j = 0; j < 5; j++) {
                int voto = rand() % num_candidatos + 1;
                votos[voto - 1][j]++;
            }
        }

        mostrar_tabla(candidatos, votos);

        pair<int, int> ganador_y_perdedor = calcular_ganador_y_perdedor(votos);

        cout << "El candidato ganador es: " << candidatos[ganador_y_perdedor.first] << endl;
        cout << "El candidato que menos votos obtuvo es: " << candidatos[ganador_y_perdedor.second] << endl;
    } while (seguir_calculando());

    return 0;
}

void ingresar_datos(vector<string>& candidatos, vector<vector<int>>& votos) {
    // No necesario en este caso
}

void mostrar_tabla(const vector<string>& candidatos, const vector<vector<int>>& votos) {
    cout << "Candidato\t";
    for (int i = 0; i < 5; i++) {
        cout << "Ronda " << i + 1 << "\t";
    }
    cout << "Total" << endl;

    for (int i = 0; i < candidatos.size(); i++) {
        cout << candidatos[i] << "\t";
        int total = 0;
        for (int j = 0; j < 5; j++) {
            cout << votos[i][j] << "\t";
            total += votos[i][j];
        }
        cout << total << endl;
    }
}

pair<int, int> calcular_ganador_y_perdedor(const vector<vector<int>>& votos) {
    int max_votos = 0, min_votos = votos[0][0];
    int max_index = 0, min_index = 0;

    for (int i = 0; i < votos.size(); i++) {
        int total_votos = 0;
        for (int j = 0; j < 5; j++) {
            total_votos += votos[i][j];
        }

        if (total_votos > max_votos) {
            max_votos = total_votos;
            max_index = i;
        }

        if (total_votos < min_votos) {
            min_votos = total_votos;
            min_index = i;
        }
    }

    return make_pair(max_index, min_index);
}

bool seguir_cal

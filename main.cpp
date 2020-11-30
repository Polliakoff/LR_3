#include "KS_type.h"
#include "truba_type.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	//������� �������
	map <int, truba_type> pipes;
	map <int, KS_type> KS_es;
	string temp_string;//���������� ��������� ���������� (��������� ������ �. �. ������������ �����������)
	while (true) {
		menu();
		//���������� ������ ��������
		double selection; 
		string str_selection;
		input_and_check(selection, 1);
			switch (int(selection)) {

			case 1:{
				//�������� ����� ������ ����� � ��������� �� � ������ ����
				truba_type temp_truba;
				temp_truba.vvod();
				pipes.emplace(temp_truba.get_id(),temp_truba);
			}
				  break;
			case 2: {
				//�������� ����� ������ �� � ��������� �� � ������ ��
				KS_type temp_KS;
				temp_KS.vvod();
				KS_es.emplace(temp_KS.get_id(), temp_KS);
			}
				break;
			case 3: {
                vivod_vsego(pipes, "�����");
				vivod_vsego(KS_es, "��");
			}
				break;
			case 4: {
				edit_by_id(pipes);
			}
				break;
			case 5: {
				edit_by_id(KS_es);
			}
				break;
			case 6: {
				save_all(pipes, KS_es);
			}
				break;
			case 7: {
				load_all(pipes, KS_es);
			}
				break;
			case 8: {
				switch_search(pipes);
			}
				  break;
			case 9: {
				switch_search(KS_es);
			}
				  break;
			case 10:{
				delete_object(pipes, "����� ");
			}
				 break;
			case 11: {
				delete_object(pipes, "�� ");
			}
				  break;
			case 0: {
				return 0;
			}
				  break;
			default: {
				cout << "������� ����� �� 0 �� 11 ��� ������ ��������" << endl;
			}
				   break;
			}

        std::system("pause");
        std::system("cls");
	}
	return 0;
}

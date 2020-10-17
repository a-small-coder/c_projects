#include "Ffirst.h"
#include <Windows.h>
using namespace ValueChange;  // Название проекта

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Application::Run(gcnew Ffirst);
    return 0;
}

# miniscience
## Lab1 (лабораторная работа 1, gmsh)
### Этап 1
#### (Полый тор с толстыми стенками и сетка в нем)
Приложенные файлы:
1. torus.cpp - файл с кодом, задающим объект и строющим в нем сетку
2. torus2.png - скриншот полученной сетки в окне gmsh
3. torus1.png - скриншот полученной модели в paraview, в разрезе
### Этап 2
#### (Построение сетки в готовой модели)
Приложенные файлы:
1. Pawn.stl - модель шахматной пешки, которая будет загружаться в gmsh
2. model.cpp - код, создающий сетку в загруженной модели
3. model.png - скриншот построенной в модели сетки в окне gmsh
### Общее
CMakeList.txt - файл, чтобы все работало
## Lab2 (лабораторная работа 2, VTK)
### Основная лаба
#### (Махинации с объектом)
Приложенные файлы:
1. model.cpp - файл с кодом, задающий поведение шахматной пешки
2. Pawn.stl - модель шахматной пешки, с которой будут производиться манипуляции
3. CMakeList.txt - файл, чтобы все работало
### Видео с результатами
1. Движение пешки с раскраской по скорости: https://www.youtube.com/watch?v=G626CPz0_8s
2. Движение пешки с раскраской по нагреву: https://www.youtube.com/watch?v=XeWM0LsGiVM
## Lab3 (лабораторная работа 3, FEniCS)
### Основная лаба
#### (Махинации с Пуассоном)
Приложенные файлы:
1. Poisson.cpp - файл с рукописным кодом солвера (измененным)
2. Poisson.h - солвер, сгенерированный автоматически
3. Poisson.ufl - файл, по которому был сгенерирован солвер (измененный)
4. CMakeList.txt - файл, чтобы все работало
### Иллюстрации
1. initial_poisson.jpg - скриншот результатов исходных рассчетов
2. updated poisso.png - скриншот результатов рассчетов измененного кода

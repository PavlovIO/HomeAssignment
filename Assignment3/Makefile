
#переменные
CXX = g++
CXXFLAGS = -Wall -Werror -Wpedantic -g -std=c++11
LDFLAGS = -lgtest -lgtest_main -pthread

# Список всех исходников
SRC = ClassTransformer.cpp ClassGun.cpp ClassDirection.cpp ClassUltimate.cpp ClassAutobot.cpp ClassDecepticon.cpp ClassDinobot.cpp Tests.cpp
#Список всех объектных файлов
OBJ = $(SRC:.cpp=.o)

#Исполняемый файл
TARGET = output

#Правило по умолчанию
all: $(TARGET)

#Правило сборки
$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(TARGET) $(LDFLAGS)

#Правило для компиляции
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

#Правило очистки
clean:
	rm -f $(OBJ)
cleanall:
	rm -f $(OBJ) $(TARGET)

#Правило для запуска тестов
run: $(TARGET)
	./$(TARGET)

# Указываем зависимости для объектных файлов
ClassTransformer.o: ClassTransformer.cpp ClassTransformer.h ClassGun.h ClassUltimate.h ClassDirection.h
ClassGun.o: ClassGun.cpp ClassGun.h
ClassDirection.o: ClassDirection.cpp ClassDirection.h
ClassUltimate.o: ClassUltimate.cpp ClassUltimate.h
ClassAutobot.o: ClassAutobot.cpp ClassAutobot.h
ClassDecepticon.o: ClassDecepticon.cpp ClassDecepticon.h
ClassDinobot.o: ClassDinobot.cpp ClassDinobot.h

.PHONY: all clean run









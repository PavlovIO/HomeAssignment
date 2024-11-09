
#переменные
CXX = g++
CXXFLAGS = -Wall -Werror -Wpedantic -g -std=c++11
LDFLAGS = -lgtest -lgtest_main -pthread

# Список всех исходников
SRC = $(wildcard *.cpp)

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



.PHONY: all clean run









# Makefile for Face Recognition Adapter Pattern Demo
# 人脸识别适配器模式演示程序的Makefile

CXX = g++
CXXFLAGS = -std=c++14 -Wall -Wextra -O2
TARGET = face_recognition_demo
SOURCES = face_recognition_demo.cpp face_inference_engine.cpp
OBJECTS = $(SOURCES:.cpp=.o)

# 默认目标
all: $(TARGET)

# 编译目标程序
$(TARGET): $(OBJECTS)
	$(CXX) $(OBJECTS) -o $(TARGET)
	@echo "编译完成: $(TARGET)"

# 编译源文件
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# 清理编译产物
clean:
	rm -f $(OBJECTS) $(TARGET)
	@echo "清理完成"

# 运行程序
run: $(TARGET)
	./$(TARGET)

# 帮助信息
help:
	@echo "可用的make目标:"
	@echo "  all     - 编译程序 (默认)"
	@echo "  clean   - 清理编译产物"
	@echo "  run     - 编译并运行程序"
	@echo "  help    - 显示此帮助信息"

.PHONY: all clean run help 
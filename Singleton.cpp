#include "Framework.h"

// Singleton Point instance를 nullptr로 초기화
Singleton* Singleton::instance = nullptr;

// 생성자
Singleton::Singleton() { }

// 소멸자
Singleton::~Singleton() { }

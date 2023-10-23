# C_Programming

## 1.First Application

## 2.String Operations

### sizeof() 
```c

int main() {
  char x = 'k';
  char y = 'ü';

  printf("%d\n", sizeof(x));
  printf("%d\n", sizeof(y));

  return 0;
}

//Output
//1
//2

```


Eğer standart tanımda mevcut olmayan türkçe karakter gibi karakterler standart tanım kümesinde yer almazlar. Bu yüzden standart karakterler gibi 1 byte değil , 2 byte ile depolanırlar.





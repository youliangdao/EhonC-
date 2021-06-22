#include <stdio.h>

class MikanBox{
  public:
      void Add(int addmikan); //みかんを入れる
      void Del(int delmikan); //みかんを取り出す
      void Empty(); // 箱を空にする
      int GetTotal(){
        return total;
      }
  private:
      int total;
};

void MikanBox::Add(int addmikan){
  total += addmikan;
}

void MikanBox::Del(int delmikan){
  total -= delmikan;
  if (total <= 0) Empty();
}

void MikanBox::Empty(){
  total = 0;
}

int main()
{
  MikanBox myMikanBox;

  myMikanBox.Empty();
  myMikanBox.Add(5);
  myMikanBox.Del(2);
  printf("箱の中のみかん：%d個\n", myMikanBox.GetTotal());
  return 0;
}

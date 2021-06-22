#include <stdio.h>

class MikanBox{
  public:
      MikanBox();
      ~MikanBox();
      void Add(int addmikan); //みかんを入れる
      void Del(int delmikan); //みかんを取り出す
      void Empty(); // 箱を空にする
      int GetTotal(){
        return total * 50;
      }
  private:
      int total;
};

MikanBox::MikanBox(){
  total = 0;
}

MikanBox::~MikanBox(){
  printf("みかん箱オブジェクトの任務完了\n");
}

void MikanBox::Add(int addmikan){
  total += addmikan * 50;
  if (total >= 5000) printf("合計が100個を超えました\n");
}

void MikanBox::Del(int delmikan){
  total -= delmikan * 50;
  if (total <= 0) Empty();
}

void MikanBox::Empty(){
  total = 0;
}

int main()
{
  MikanBox myMikanBox;
  myMikanBox.Add(124);
  myMikanBox.Del(10);
  printf("箱の中のみかん：%d個\n", myMikanBox.GetTotal() / 50);
  return 0;
}

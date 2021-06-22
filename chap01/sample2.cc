class MikanBox{
public:
    void Add(int addmikan);
    void Del(int delmikan);
    void Empty(void);
    int GetTotal();
private:
    int total;
};

void MikanBox::Add(int addmikan){
  total += addmikan;
}

MikanBox myMikanBox1;
MikanBox myMikanBox2;
MikanBox myMikanBox3;

void MikanBox::Empty(){
  total = 0;
}

void MikanBox::Del(int delmikan){
  total -= delmikan;
  if (total < 0) Empty();
















}
#ifndef OUR_FIRST_CLASS_H_INCLUDED
#define OUR_FIRST_CLASS_H_INCLUDED


class personalData{

    private:

        short age;
    public:
        personalData();
        ~personalData();
    void setAge(int value);
       short getAge(){
        return age;
       }



};

#endif // OUR_FIRST_CLASS_H_INCLUDED

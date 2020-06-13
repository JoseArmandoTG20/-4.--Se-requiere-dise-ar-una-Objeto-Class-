#ifndef PERSONA_H
#define PERSONA_H


class Persona
{
    private:
        char nombraut[100];
        char apellaut[100];
        char nacioaut[100];

    public:
        Persona();
        Persona(char[],char[],char[]);
        void registaut();
        void datosautor();
        void editnomb();
        void editapell();
        void editnaci();

};

#endif // PERSONA_H

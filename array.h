class Lista {
   private:
   int *i;
   int tam;
   int ult;
   
   public:
   void initList (int tam);
   int insereList (int n);
   int taCheia (void);
   int len (void);
   void aliment (void);
   bool removeIdc (int in);
   void imprime (void);
   bool removeItem (int item);
   void getIt (int n);
   void realoca ();
   int getUlt ();
};
 
 


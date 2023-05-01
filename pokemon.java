public class pokemon {
    public String name;
    public int level;
    public pokemon(String name,int level){

        this.name=name;
        this.level=level;
    }
    public static void main (String[] args ){
        pokemon p =new pokemon("pikachu",17);
        int level=100;
        change(p,level);
        System.out.println("name:   "+p.name + " ,level "+ p.level);}
    public static void change(pokemon poke,int level){
        poke.level=level;
        level=50;
        poke=new pokemon("gengar",1);
    }
}


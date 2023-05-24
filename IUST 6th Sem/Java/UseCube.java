class cube
{
    int heigth;
    int width;
    int depth;
}
class UseCube
{
    public static void main(String[] args) {
        cube c = new cube();

        c.heigth = 10;
        c.width = 20;
        c.depth = 30;

        int vol = c.heigth * c.width * c.depth;

        System.out.print("Volume of Cube: " + vol);
    }
}
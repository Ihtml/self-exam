import java.io.*
class Test30 {
    public static void main(String args[]){
        try {
            FileInputStream fis = new FileInputStream("Test30.java");
            InputStreamReader dis = new InputStreamReader(fis);
            BufferedReader reader = new BufferedReader(dis);
            String s;
            while((s = reader.readerLine()) != null){
                System.out.println("read:" + s);
            }
            dis.close();
        } catch (IOException e) {
            System.out.println(e);}
    }
}
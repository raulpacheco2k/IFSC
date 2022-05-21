package bo;

import java.util.ArrayList;
import java.util.List;

/**
 *
 * @author raulpacheco2k
 */
public class Singleton {
    public static List<Servidores> servidoresList = new ArrayList<>();
    private static Singleton uniqueInstance;

    private Singleton() {
    }

    public static synchronized Singleton getInstance() {
    	if (uniqueInstance == null) {
            uniqueInstance = new Singleton();
        }

        return uniqueInstance;
	}
}
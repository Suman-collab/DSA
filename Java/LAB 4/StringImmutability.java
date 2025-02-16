public class StringImmutability {
    public static void main(String[] args) {
        String original = "Immutable";
        System.out.println("Original String: " + original);

        // Attempting to change the original string
        String modified = original.concat(" String");
        System.out.println("Modified String: " + modified);

        // Checking if the original string has changed
        System.out.println("Original String after modification attempt: " + original);
    }
}

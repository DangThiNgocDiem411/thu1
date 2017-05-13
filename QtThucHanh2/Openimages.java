


public class Openimages QtActivity {

}



public class ImagePickerAndroid extends QtActivity {
    public static Intent imagePicker() {
        Intent i = new Intent(Intent.ACTION_PICK);
        i.setType( "image/*");
        return Intent.createChooser(i, "Select Image");
    }
}

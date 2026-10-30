#include <iostream>
using namespace std;

class Image {
protected:
    int width;
    int height;
public:
    Image(int w,int h){
        width=w;
        height=h;
    }

    long long calculateOriginalPixels(){
        return (long long)width*height;
    }
};

class CompressedImage : public Image{
protected:
    double compressionRatio;

public:
    CompressedImage(int w,int h,double ratio) : Image(w,h){
        compressionRatio=ratio;
    }

    double calculateEffectiveSize() {
        return (calculateOriginalPixels() * compressionRatio) / 100.0;
    }
};

class EncryptedImage : public CompressedImage{
private:
    string encryptionAlgorithm;

public:
    EncryptedImage(int w,int h,double ratio,string algo)
        : CompressedImage(w,h,ratio) {
        encryptionAlgorithm = algo;
    }

    void displayMetadata() {
        cout<<"--- Digital Image Metadata ---\n";
        cout<<"Dimensions         : "<<width<<" x "<<height<<" px\n";
        cout<<"Original Pixels    : "<<calculateOriginalPixels()<<" pixels\n";
        cout<<"Compression Ratio  : "<<compressionRatio<<" %\n";
        cout<<"Effective Size     : "<<calculateEffectiveSize()<<" pixel-equivalents\n";
        cout<<"Encryption Algo    : "<<encryptionAlgorithm<<"\n\n";
    }
};

int main() {
    EncryptedImage img(1920,1080,45.0,"AES-256");
    img.displayMetadata();

    return 0;
}

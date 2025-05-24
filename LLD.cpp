#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// class with only image data
class Image
{
    public:
    string name;
    string metadata;
    string content;

    Image(string name) : name(name), metadata(""), content(""){}
};
// 1.Responsibility: capturing Image
class ImageCapturer
{
    public:
    void clickImage(Image &img)
    {
        img.content = "Raw Image Data";
        img.metadata = "Captured at high resolution";
        cout<<"Image clicked:"<<img.name<<endl;
    }

};
// 2. Responsibility: cropping Image
class ImageCropper
{
    public:
    void cropImage(Image &img)
    {
        img.content+= " | cropped.";
        cout<<"Image cropped."<<endl;
    }
};
// 3. sharpening Image
class ImageSharpner
{
    public:
    void sharpenImage(Image &img)
    {
        img.content+= " | sharpern";
        cout<<"Image sharperned."<<endl;
    }
};
// 4. responsibility: coloring Image
class ImageColorizer
{
    public:
    void addcolor(Image &img)
    {
        img.content+= " | colored";
        cout<<"color added to image"<<endl;
    }
};
// 5. Responsibility: saving Image
class ImageSaver
{
    public:
    void saveImage(const Image &img)
    {
        cout<<"Image saved: "<<img.name<<endl;
        cout<<"metadata:"<<img.metadata<<endl;
        cout<<"content:"<<img.content<<endl;
    }
};

int main()
{
    Image myImage("My photo");
    ImageCapturer capture;
    ImageCropper crop;
    ImageSharpner sharpner;
    ImageColorizer color;
    ImageSaver saver;

    capture.clickImage(myImage);
    crop.cropImage(myImage);
    sharpner.sharpenImage(myImage);
    color.addcolor(myImage);
    saver.saveImage(myImage);

    return 0;
}

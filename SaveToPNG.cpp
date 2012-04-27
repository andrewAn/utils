/* =================================for iOS================================ */

CGDataProviderRef cgDPR =  CGDataProviderCreateWithData(0, pixels, m_currentWidth * m_currentWidth*4, 0);
CGImageRef cgIR = CGImageCreate(m_currentWidth, m_currentHeight, 8, 32, m_currentWidth * 4, deviceRGBColorSpaceRef(), kCGImageAlphaPremultipliedFirst | kCGBitmapByteOrder32Host, cgDPR, 0, false, kCGRenderingIntentDefault);

UIImage *uiIR = [UIImage imageWithCGImage:cgIR];
NSData *data = UIImagePNGRepresentation(uiIR);

//get the path to the Documents directory
NSArray* paths = NSSearchPathForDirectoriesInDomains
    (NSDocumentDirectory, NSUserDomainMask, YES);
NSString* documentsDirectory = [paths objectAtIndex:0];
NSString  * str = [documentsDirectory stringByAppendingFormat:@"/%s.png","yourfilename"];
BOOL res = [data writeToFile:str atomically:NO];

/* =================================for iOS================================ */

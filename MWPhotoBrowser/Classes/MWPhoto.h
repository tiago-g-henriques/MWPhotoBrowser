//
//  MWPhoto.h
//  MWPhotoBrowser
//
//  Created by Michael Waterfall on 17/10/2010.
//  Copyright 2010 d3i. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MWPhotoProtocol.h"
#import "SDWebImageDecoder.h"
#import "SDWebImageManager.h"

// This class models a photo/image and it's caption
// If you want to handle photos, caching, decompression
// yourself then you can simply ensure your custom data model
// conforms to MWPhotoProtocol
@interface MWPhoto : NSObject <MWPhoto, SDWebImageManagerDelegate, SDWebImageDecoderDelegate>

// Properties
@property (nonatomic, retain) NSString *dateTime;
@property (nonatomic, retain) NSString *category;
@property (nonatomic, retain) NSString *caption;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, retain) NSString *imageUrlString;
@property (nonatomic, retain) NSString *pageUrlString;
@property (nonatomic, retain) NSString *mobilePageUrlString;
@property (nonatomic, retain) NSString *photoID;
@property (nonatomic, retain) NSURL *photoURL;

// Class
+ (MWPhoto *)photoWithImage:(UIImage *)image;
+ (MWPhoto *)photoWithFilePath:(NSString *)path;
+ (MWPhoto *)photoWithURL:(NSURL *)url;

// Init
- (id)initWithImage:(UIImage *)image;
- (id)initWithFilePath:(NSString *)path;
- (id)initWithURL:(NSURL *)url;

@end


//
//  updateManager.h
//  gfxCardStatus
//
//  Created by Cody Krieger on 4/25/10.
//  Copyright 2010 Cody Krieger. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface updateManager : NSObject {

}

+ (NSDictionary *)checkForUpdate;
+ (void)update;

@end

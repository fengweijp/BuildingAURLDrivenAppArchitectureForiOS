//
//  Created by Developer on 2014/08/23.
//  Copyright (c) 2014 Michael May & Tim Chilvers. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "MMTCPresenterProtocol.h"
#import "MMTCPresenterBase.h"

@interface MMTCSchemePresenter : MMTCPresenterBase <MMTCPresenterProtocol>

extern NSString *MMTCLaunchURLHandlerScheme;
extern NSString *MMTCMailToScheme;

@end

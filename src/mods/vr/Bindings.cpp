#include "../VR.hpp"

std::string VR::actions_json = R"(
{
  "actions": [
    {
      "name": "/actions/default/in/HeadsetOnHead",
      "type": "boolean"
    },
    {
      "name": "/actions/default/in/SkeletonLeftHand",
      "type": "skeleton",
      "skeleton": "/skeleton/hand/left"
    },
    {
      "name": "/actions/default/in/SkeletonRightHand",
      "type": "skeleton",
      "skeleton": "/skeleton/hand/right"
    },
    {
      "name": "/actions/default/in/Pose",
      "type": "pose"
    },
    {
      "name": "/actions/default/in/Trigger",
      "type": "boolean"
    },
    {
      "name": "/actions/default/in/Grip",
      "type": "boolean"
    },
    {
      "name": "/actions/default/in/Touchpad",
      "type": "vector2"
    },
    {
      "name": "/actions/default/in/TouchpadClick",
      "type": "boolean"
    },
    {
      "name": "/actions/default/in/Joystick",
      "type": "vector2"
    },
    {
      "name": "/actions/default/in/JoystickClick",
      "type": "boolean"
    },
    {
      "name": "/actions/default/in/AButton",
      "type": "boolean"
    },
    {
      "name": "/actions/default/in/BButton",
      "type": "boolean"
    },
    {
      "name": "/actions/default/in/SystemButton",
      "type": "boolean"
    },
    {
      "name": "/actions/default/in/Squeeze",
      "type": "vector1"
    },
    {
      "name": "/actions/default/in/Teleport",
      "type": "boolean"
    },
    {
      "name": "/actions/default/in/DPad_Up",
      "type": "boolean"
    },
    {
      "name": "/actions/default/in/DPad_Right",
      "type": "boolean"
    },
    {
      "name": "/actions/default/in/DPad_Down",
      "type": "boolean"
    },
    {
      "name": "/actions/default/in/DPad_Left",
      "type": "boolean"
    },
    {
      "name": "/actions/default/in/WeaponDial_Start",
      "type": "boolean"
    },
    {
      "name": "/actions/default/in/RE3_Dodge",
      "type": "boolean"
    },
    {
      "name": "/actions/default/in/RE2_Quickturn",
      "type": "boolean"
    },
    {
      "name": "/actions/default/in/RE2_FirstPerson_Toggle",
      "type": "boolean"
    },
    {
      "name": "/actions/default/in/RE2_Reset_View",
      "type": "boolean" 
    },
    {
      "name": "/actions/default/in/RE2_Change_Ammo",
      "type": "boolean" 
    },
    {
      "name": "/actions/default/in/OpenMap",
      "type": "boolean" 
    },
    {
      "name": "/actions/default/out/Haptic",
      "type": "vibration"
    }
  ],
  "action_sets": [
    {
      "name": "/actions/default",
      "usage": "single"
    }
  ],
  "default_bindings": [
    {
      "controller_type": "vive",
      "binding_url": "binding_vive.json"
    },
    {
      "controller_type": "vive_controller",
      "binding_url": "bindings_vive_controller.json"
    },
    {
      "controller_type": "oculus_touch",
      "binding_url": "bindings_oculus_touch.json"
    },
    {
      "controller_type": "knuckles",
      "binding_url": "bindings_knuckles.json"
    },
    {
      "controller_type": "rift",
      "binding_url": "binding_rift.json"
    },
    {
      "controller_type": "holographic_controller",
      "binding_url": "binding_holographic_controller.json"
    }
  ],
  "localization": []
})";

std::string VR::binding_rift_json = R"(
{
   "alias_info" : {},
   "bindings" : {
      "/actions/default" : {
         "chords" : [],
         "haptics" : [],
         "poses" : [],
         "skeleton" : [],
         "sources" : [
            {
               "inputs" : {
                  "click" : {
                     "output" : "/actions/default/in/headsetonhead"
                  }
               },
               "mode" : "button",
               "path" : "/user/head/proximity"
            }
         ]
      }
   },
   "controller_type" : "rift",
   "description" : "",
   "name" : "rift defaults",
   "options" : {},
   "simulated_actions" : []
})";

std::string VR::bindings_oculus_touch_json = R"(
{
   "alias_info" : {},
   
   "bindings" : {
      "/actions/default" : {
         "chords" : [],
         "haptics" : [
            {
               "output" : "/actions/default/out/haptic",
               "path" : "/user/hand/left/output/haptic"
            },
            {
               "output" : "/actions/default/out/haptic",
               "path" : "/user/hand/right/output/haptic"
            }
         ],
         "poses" : [
            {
               "output" : "/actions/default/in/pose",
               "path" : "/user/hand/left/pose/raw"
            },
            {
               "output" : "/actions/default/in/pose",
               "path" : "/user/hand/right/pose/raw"
            }
         ],
         "skeleton" : [
            {
               "output" : "/actions/default/in/skeletonrighthand",
               "path" : "/user/hand/right/input/skeleton/right"
            },
            {
               "output" : "/actions/default/in/skeletonlefthand",
               "path" : "/user/hand/left/input/skeleton/left"
            }
         ],
         "sources" : [
            {
               "inputs" : {
                  "pull" : {
                     "output" : "/actions/default/in/squeeze"
                  }
               },
               "mode" : "trigger",
               "path" : "/user/hand/left/input/grip"
            },
            {
               "inputs" : {
                  "pull" : {
                     "output" : "/actions/default/in/squeeze"
                  }
               },
               "mode" : "trigger",
               "path" : "/user/hand/right/input/grip"
            },
            {
               "inputs" : {
                  "click" : {
                     "output" : "/actions/default/in/trigger"
                  }
               },
               "mode" : "button",
               "path" : "/user/hand/left/input/trigger"
            },
            {
               "inputs" : {
                  "click" : {
                     "output" : "/actions/default/in/weapondial_start"
                  }
               },
               "mode" : "button",
               "path" : "/user/hand/left/input/trigger"
            },
            {
               "inputs" : {
                  "click" : {
                     "output" : "/actions/default/in/trigger"
                  }
               },
               "mode" : "button",
               "path" : "/user/hand/right/input/trigger"
            },
            {
               "inputs" : {
                  "click" : {
                     "output" : "/actions/default/in/grip"
                  }
               },
               "mode" : "button",
               "path" : "/user/hand/left/input/grip"
            },
            {
               "inputs" : {
                  "click" : {
                     "output" : "/actions/default/in/grip"
                  }
               },
               "mode" : "button",
               "path" : "/user/hand/right/input/grip"
            },
            {
               "inputs" : {
                  "click" : {
                     "output" : "/actions/default/in/abutton"
                  }
               },
               "mode" : "button",
               "path" : "/user/hand/left/input/x"
            },
            {
               "inputs" : {
                  "click" : {
                     "output" : "/actions/default/in/abutton"
                  }
               },
               "mode" : "button",
               "path" : "/user/hand/right/input/x"
            },
            {
               "inputs" : {
                  "click" : {
                     "output" : "/actions/default/in/bbutton"
                  }
               },
               "mode" : "button",
               "path" : "/user/hand/left/input/y"
            },
            {
               "inputs" : {
                  "click" : {
                     "output" : "/actions/default/in/bbutton"
                  }
               },
               "mode" : "button",
               "path" : "/user/hand/right/input/y"
            },
            {
               "inputs" : {
                  "click" : {
                     "output" : "/actions/default/in/abutton"
                  }
               },
               "mode" : "button",
               "path" : "/user/hand/right/input/a"
            },
            {
               "inputs" : {
                  "click" : {
                     "output" : "/actions/default/in/re3_dodge"
                  }
               },
               "mode" : "button",
               "path" : "/user/hand/right/input/a"
            },
            {
               "inputs" : {
                  "click" : {
                     "output" : "/actions/default/in/joystickclick"
                  },
                  "position" : {
                     "output" : "/actions/default/in/joystick"
                  }
               },
               "mode" : "joystick",
               "path" : "/user/hand/left/input/joystick"
            },
            {
               "inputs" : {
                  "click" : {
                     "output" : "/actions/default/in/joystickclick"
                  },
                  "position" : {
                     "output" : "/actions/default/in/joystick"
                  }
               },
               "mode" : "joystick",
               "path" : "/user/hand/right/input/joystick"
            },
            {
               "inputs" : {
                  "click" : {
                     "output" : "/actions/default/in/bbutton"
                  }
               },
               "mode" : "button",
               "path" : "/user/hand/right/input/b"
            },
            {
               "inputs" : {
                  "click" : {
                     "output" : "/actions/default/in/systembutton"
                  }
               },
               "mode" : "button",
               "path" : "/user/hand/left/input/system"
            },
            {
               "inputs" : {
                  "click" : {
                     "output" : "/actions/default/in/systembutton"
                  }
               },
               "mode" : "button",
               "path" : "/user/hand/right/input/system"
            }
         ]
      }
   },
   "controller_type" : "oculus_touch",
   "description" : "",
   "name" : "oculus_touch",
   "options" : {},
   "simulated_actions" : []
})";

std::string VR::binding_vive = R"(
{
   "alias_info" : {},
   "bindings" : {
      "/actions/default" : {
         "chords" : [],
         "haptics" : [],
         "poses" : [],
         "skeleton" : [],
         "sources" : [
            {
               "inputs" : {
                  "click" : {
                     "output" : "/actions/default/in/headsetonhead"
                  }
               },
               "mode" : "button",
               "path" : "/user/head/proximity"
            }
         ]
      }
   },
   "controller_type" : "vive",
   "description" : "",
   "name" : "vive defaults",
   "options" : {},
   "simulated_actions" : []
})";

std::string VR::bindings_vive_controller = R"(
{
   "alias_info" : {},
   
   "bindings" : {
      "/actions/default" : {
         "chords" : [],
         "haptics" : [
            {
               "output" : "/actions/default/out/haptic",
               "path" : "/user/hand/left/output/haptic"
            },
            {
               "output" : "/actions/default/out/haptic",
               "path" : "/user/hand/right/output/haptic"
            }
         ],
         "poses" : [
            {
               "output" : "/actions/default/in/pose",
               "path" : "/user/hand/left/pose/raw"
            },
            {
               "output" : "/actions/default/in/pose",
               "path" : "/user/hand/right/pose/raw"
            }
         ],
         "skeleton" : [
            {
               "output" : "/actions/default/in/skeletonlefthand",
               "path" : "/user/hand/left/input/skeleton/left"
            },
            {
               "output" : "/actions/default/in/skeletonrighthand",
               "path" : "/user/hand/right/input/skeleton/right"
            }
         ],
         "sources" : [
            {
               "inputs" : {
                  "click" : {
                     "output" : "/actions/default/in/grip"
                  }
               },
               "mode" : "button",
               "path" : "/user/hand/left/input/grip"
            },
            {
               "inputs" : {
                  "click" : {
                     "output" : "/actions/default/in/bbutton"
                  }
               },
               "mode" : "button",
               "path" : "/user/hand/left/input/application_menu"
            },
            {
               "inputs" : {
                  "click" : {
                     "output" : "/actions/default/in/joystickclick"
                  },
                  "position" : {
                     "output" : "/actions/default/in/joystick"
                  }
               },
               "mode" : "trackpad",
               "path" : "/user/hand/left/input/trackpad"
            },
            {
               "inputs" : {
                  "click" : {
                     "output" : "/actions/default/in/trigger"
                  }
               },
               "mode" : "trigger",
               "path" : "/user/hand/left/input/trigger"
            },
            {
               "inputs" : {
                  "click" : {
                     "output" : "/actions/default/in/bbutton"
                  }
               },
               "mode" : "button",
               "path" : "/user/hand/right/input/application_menu"
            },
            {
               "inputs" : {
                  "click" : {
                     "output" : "/actions/default/in/grip"
                  }
               },
               "mode" : "button",
               "path" : "/user/hand/right/input/grip"
            },
            {
               "inputs" : {
                  "click" : {
                     "output" : "/actions/default/in/joystickclick"
                  },
                  "position" : {
                     "output" : "/actions/default/in/joystick"
                  }
               },
               "mode" : "trackpad",
               "path" : "/user/hand/right/input/trackpad"
            },
            {
               "inputs" : {
                  "click" : {
                     "output" : "/actions/default/in/trigger"
                  }
               },
               "mode" : "trigger",
               "path" : "/user/hand/right/input/trigger"
            },
            {
               "inputs" : {
                  "click" : {
                     "output" : "/actions/default/in/systembutton"
                  }
               },
               "mode" : "button",
               "path" : "/user/hand/left/input/system"
            },
            {
               "inputs" : {
                  "click" : {
                     "output" : "/actions/default/in/systembutton"
                  }
               },
               "mode" : "button",
               "path" : "/user/hand/right/input/system"
            }
         ]
      }
   },
   "controller_type" : "vive_controller",
   "description" : "",
   "name" : "vive_controller",
   "options" : {},
   "simulated_actions" : []
})";

std::string VR::bindings_knuckles = R"(
{
   "alias_info" : {},
   
   "bindings" : {
      "/actions/default" : {
         "chords" : [],
         "haptics" : [
            {
               "output" : "/actions/default/out/haptic",
               "path" : "/user/hand/left/output/haptic"
            },
            {
               "output" : "/actions/default/out/haptic",
               "path" : "/user/hand/right/output/haptic"
            }
         ],
         "poses" : [
            {
               "output" : "/actions/default/in/pose",
               "path" : "/user/hand/left/pose/raw"
            },
            {
               "output" : "/actions/default/in/pose",
               "path" : "/user/hand/right/pose/raw"
            }
         ],
         "skeleton" : [
            {
               "output" : "/actions/default/in/skeletonrighthand",
               "path" : "/user/hand/right/input/skeleton/right"
            },
            {
               "output" : "/actions/default/in/skeletonlefthand",
               "path" : "/user/hand/left/input/skeleton/left"
            }
         ],
         "sources" : [
            {
               "inputs" : {
                  "force" : {
                     "output" : "/actions/default/in/squeeze"
                  }
               },
               "mode" : "force_sensor",
               "path" : "/user/hand/left/input/grip"
            },
            {
               "inputs" : {
                  "click" : {
                     "output" : "/actions/default/in/trigger"
                  }
               },
               "mode" : "button",
               "path" : "/user/hand/left/input/trigger"
            },
            {
               "inputs" : {
                  "click" : {
                     "output" : "/actions/default/in/weapondial_start"
                  }
               },
               "mode" : "button",
               "path" : "/user/hand/left/input/trigger"
            },
            {
               "inputs" : {
                  "position" : {
                     "output" : "/actions/default/in/touchpad"
                  }
               },
               "mode" : "trackpad",
               "path" : "/user/hand/left/input/trackpad"
            },
            {
               "inputs" : {
                  "click" : {
                     "output" : "/actions/default/in/touchpadclick"
                  }
               },
               "mode" : "button",
               "path" : "/user/hand/left/input/trackpad"
            },
            {
               "inputs" : {
                  "click" : {
                     "output" : "/actions/default/in/joystickclick"
                  },
                  "position" : {
                     "output" : "/actions/default/in/joystick"
                  }
               },
               "mode" : "joystick",
               "path" : "/user/hand/left/input/thumbstick"
            },
            {
               "inputs" : {
                  "click" : {
                     "output" : "/actions/default/in/bbutton"
                  }
               },
               "mode" : "button",
               "path" : "/user/hand/left/input/b"
            },
            {
               "inputs" : {
                  "click" : {
                     "output" : "/actions/default/in/abutton"
                  }
               },
               "mode" : "button",
               "path" : "/user/hand/left/input/a"
            },
            {
               "inputs" : {
                  "click" : {
                     "output" : "/actions/default/in/grip"
                  }
               },
               "mode" : "button",
               "parameters" : {
                  "click_activate_threshold" : "0.3",
                  "click_deactivate_threshold" : "0.25",
                  "force_input" : "force",
                  "haptic_amplitude" : "0.6"
               },
               "path" : "/user/hand/left/input/grip"
            },
            {
               "inputs" : {
                  "click" : {
                     "output" : "/actions/default/in/abutton"
                  }
               },
               "mode" : "button",
               "path" : "/user/hand/right/input/a"
            },
            {
               "inputs" : {
                  "click" : {
                     "output" : "/actions/default/in/re3_dodge"
                  }
               },
               "mode" : "button",
               "path" : "/user/hand/right/input/a"
            },
            {
               "inputs" : {
                  "click" : {
                     "output" : "/actions/default/in/bbutton"
                  }
               },
               "mode" : "button",
               "path" : "/user/hand/right/input/b"
            },
            {
               "inputs" : {
                  "force" : {
                     "output" : "/actions/default/in/squeeze"
                  }
               },
               "mode" : "force_sensor",
               "path" : "/user/hand/right/input/grip"
            },
            {
               "inputs" : {
                  "click" : {
                     "output" : "/actions/default/in/grip"
                  }
               },
               "mode" : "button",
               "parameters" : {
                  "click_activate_threshold" : "0.3",
                  "click_deactivate_threshold" : "0.25",
                  "force_input" : "force",
                  "haptic_amplitude" : "0.6"
               },
               "path" : "/user/hand/right/input/grip"
            },
            {
               "inputs" : {
                  "click" : {
                     "output" : "/actions/default/in/joystickclick"
                  },
                  "position" : {
                     "output" : "/actions/default/in/joystick"
                  }
               },
               "mode" : "joystick",
               "path" : "/user/hand/right/input/thumbstick"
            },
            {
               "inputs" : {
                  "position" : {
                     "output" : "/actions/default/in/touchpad"
                  }
               },
               "mode" : "trackpad",
               "path" : "/user/hand/right/input/trackpad"
            },
            {
               "inputs" : {
                  "click" : {
                     "output" : "/actions/default/in/touchpadclick"
                  }
               },
               "mode" : "button",
               "path" : "/user/hand/right/input/trackpad"
            },
            {
               "inputs" : {
                  "click" : {
                     "output" : "/actions/default/in/trigger"
                  }
               },
               "mode" : "button",
               "path" : "/user/hand/right/input/trigger"
            },
            {
               "inputs" : {
                  "north" : {
                     "output" : "/actions/default/in/teleport"
                  }
               },
               "mode" : "dpad",
               "parameters" : {
                  "sub_mode" : "touch"
               },
               "path" : "/user/hand/left/input/thumbstick"
            },
            {
               "inputs" : {
                  "north" : {
                     "output" : "/actions/default/in/teleport"
                  }
               },
               "mode" : "dpad",
               "parameters" : {
                  "sub_mode" : "touch"
               },
               "path" : "/user/hand/right/input/thumbstick"
            },
            {
               "inputs" : {
                  "click" : {
                     "output" : "/actions/default/in/systembutton"
                  }
               },
               "mode" : "button",
               "path" : "/user/hand/left/input/system"
            },
            {
               "inputs" : {
                  "click" : {
                     "output" : "/actions/default/in/systembutton"
                  }
               },
               "mode" : "button",
               "path" : "/user/hand/right/input/system"
            }
         ]
      }
   },
   "controller_type" : "knuckles",
   "description" : "",
   "name" : "knuckles_default",
   "options" : {},
   "simulated_actions" : []
})";

std::string VR::bindings_holographic_controller = R"(
{
  "alias_info": {},
  "app_key": "steam.app.883710",
  "bindings": {
    "/actions/default": {
      "sources": [
        {
          "path": "/user/hand/left/input/trigger",
          "mode": "trigger",
          "inputs": {
            "pull": {
              "output": "/actions/default/in/squeeze"
            }
          }
        },
        {
          "path": "/user/hand/left/input/trackpad",
          "mode": "radial",
          "inputs": {}
        },
        {
          "path": "/user/hand/left/input/grip",
          "mode": "button",
          "inputs": {
            "click": {
              "output": "/actions/default/in/joystickclick"
            }
          }
        },
        {
          "path": "/user/hand/left/input/application_menu",
          "mode": "button",
          "inputs": {
            "click": {
              "output": "/actions/default/in/re2_reset_view"
            },
            "held": {
              "output": "/actions/default/in/re2_firstperson_toggle"
            }
          }
        },
        {
          "path": "/user/hand/left/input/joystick",
          "mode": "joystick",
          "parameters": {
            "deadzone_pct": "20"
          },
          "inputs": {
            "click": {
              "output": "/actions/default/in/joystickclick"
            },
            "position": {
              "output": "/actions/default/in/joystick"
            }
          }
        },
        {
          "path": "/user/hand/left/input/trackpad",
          "mode": "dpad",
          "parameters": {
            "sub_mode": "click"
          },
          "inputs": {
            "east": {
              "output": "/actions/default/in/weapondial_start"
            },
            "north": {
              "output": "/actions/default/in/bbutton"
            },
            "south": {
              "output": "/actions/default/in/abutton"
            }
          }
        },
        {
          "path": "/user/hand/left/input/trigger",
          "mode": "button",
          "inputs": {
            "click": {
              "output": "/actions/default/in/grip"
            }
          }
        },
        {
          "path": "/user/hand/right/input/application_menu",
          "mode": "button",
          "inputs": {
            "click": {
              "output": "/actions/default/in/systembutton"
            },
            "held": {
              "output": "/actions/default/in/openmap"
            }
          }
        },
        {
          "path": "/user/hand/right/input/grip",
          "mode": "button",
          "inputs": {
            "click": {
              "output": "/actions/default/in/grip"
            }
          }
        },
        {
          "path": "/user/hand/right/input/joystick",
          "mode": "joystick",
          "inputs": {
            "click": {
              "output": "/actions/default/in/joystickclick"
            },
            "position": {
              "output": "/actions/default/in/joystick"
            }
          }
        },
        {
          "path": "/user/hand/right/input/skeleton/left",
          "mode": "none",
          "inputs": {}
        },
        {
          "path": "/user/hand/right/input/trackpad",
          "mode": "dpad",
          "parameters": {
            "sub_mode": "click"
          },
          "inputs": {
            "north": {
              "output": "/actions/default/in/weapondial_start"
            },
            "south": {
              "output": "/actions/default/in/abutton"
            }
          }
        },
        {
          "path": "/user/hand/right/input/trigger",
          "mode": "trigger",
          "inputs": {
            "pull": {
              "output": "/actions/default/in/squeeze"
            }
          }
        },
        {
          "path": "/user/hand/right/input/trigger",
          "mode": "button",
          "inputs": {
            "click": {
              "output": "/actions/default/in/trigger"
            }
          }
        }
      ],
      "skeleton": [
        {
          "output": "/actions/default/in/skeletonlefthand",
          "path": "/user/hand/left/input/skeleton/left"
        },
        {
          "output": "/actions/default/in/skeletonrighthand",
          "path": "/user/hand/right/input/skeleton/right"
        }
      ]
    },
    "/actions/legacy": {
      "poses": [
        {
          "output": "/actions/legacy/in/Left_Pose",
          "path": "/user/hand/left/pose/raw"
        },
        {
          "output": "/actions/legacy/in/Right_Pose",
          "path": "/user/hand/right/pose/raw"
        }
      ],
      "haptics": [
        {
          "output": "/actions/legacy/out/left_haptic",
          "path": "/user/hand/left/output/haptic"
        },
        {
          "output": "/actions/legacy/out/right_haptic",
          "path": "/user/hand/right/output/haptic"
        }
      ],
      "sources": [
        {
          "path": "/user/head/proximity",
          "mode": "button",
          "inputs": {
            "click": {
              "output": "/actions/legacy/in/head_proximity"
            }
          }
        },
        {
          "path": "/user/hand/left/input/trigger",
          "mode": "trigger",
          "inputs": {
            "click": {
              "output": "/actions/legacy/in/left_axis1_press"
            },
            "pull": {
              "output": "/actions/legacy/in/left_axis1_value"
            },
            "touch": {
              "output": "/actions/legacy/in/left_axis1_touch"
            }
          }
        },
        {
          "path": "/user/hand/right/input/grip",
          "mode": "button",
          "inputs": {
            "click": {
              "output": "/actions/legacy/in/right_grip_press"
            }
          }
        },
        {
          "path": "/user/hand/left/input/grip",
          "mode": "button",
          "inputs": {
            "click": {
              "output": "/actions/legacy/in/left_grip_press"
            }
          }
        },
        {
          "path": "/user/hand/left/input/application_menu",
          "mode": "button",
          "inputs": {
            "click": {
              "output": "/actions/legacy/in/left_applicationmenu_press"
            }
          }
        },
        {
          "path": "/user/hand/right/input/application_menu",
          "mode": "button",
          "inputs": {
            "click": {
              "output": "/actions/legacy/in/right_applicationmenu_press"
            }
          }
        },
        {
          "path": "/user/hand/left/input/trackpad",
          "mode": "trackpad",
          "inputs": {
            "click": {
              "output": "/actions/legacy/in/left_axis0_press"
            },
            "position": {
              "output": "/actions/legacy/in/left_axis0_value"
            },
            "touch": {
              "output": "/actions/legacy/in/left_axis0_touch"
            }
          }
        },
        {
          "path": "/user/hand/left/input/joystick",
          "mode": "joystick",
          "inputs": {
            "click": {
              "output": "/actions/legacy/in/left_axis2_press"
            },
            "position": {
              "output": "/actions/legacy/in/left_axis2_value2"
            },
            "touch": {
              "output": "/actions/legacy/in/left_axis2_touch"
            }
          }
        },
        {
          "path": "/user/hand/right/input/joystick",
          "mode": "joystick",
          "inputs": {
            "click": {
              "output": "/actions/legacy/in/right_axis2_press"
            },
            "position": {
              "output": "/actions/legacy/in/right_axis2_value2"
            },
            "touch": {
              "output": "/actions/legacy/in/right_axis2_touch"
            }
          }
        },
        {
          "path": "/user/hand/right/input/trackpad",
          "mode": "trackpad",
          "inputs": {
            "click": {
              "output": "/actions/legacy/in/right_axis0_press"
            },
            "position": {
              "output": "/actions/legacy/in/right_axis0_value"
            },
            "touch": {
              "output": "/actions/legacy/in/right_axis0_touch"
            }
          }
        },
        {
          "path": "/user/hand/right/input/trigger",
          "mode": "trigger",
          "inputs": {
            "click": {
              "output": "/actions/legacy/in/right_axis1_press"
            },
            "pull": {
              "output": "/actions/legacy/in/right_axis1_value"
            },
            "touch": {
              "output": "/actions/legacy/in/right_axis1_touch"
            }
          }
        }
      ]
    }
  },
  "category": "steamvr_input",
  "controller_type": "holographic_controller",
  "description": "WMR Binding L-Grip-hold=(run) L-Pad up=(inventory)  L-pad down=(back) L=(Tripper pull up knife) R-pad-up=Reload. Weapon wheel: Up on Right hand touchpad (hold) then move left thumbstick to select weapon",
  "name": "Rombodawg RE2 VR mod Bindings 4.0",
  "options": {},
  "simulated_actions": []
})";
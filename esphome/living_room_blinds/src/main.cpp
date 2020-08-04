// Auto generated code by esphome
// ========== AUTO GENERATED INCLUDE BLOCK BEGIN ===========
#include "esphome.h"
using namespace esphome;
using namespace switch_;
using namespace cover;
logger::Logger *logger_logger;
web_server_base::WebServerBase *web_server_base_webserverbase;
captive_portal::CaptivePortal *captive_portal_captiveportal;
wifi::WiFiComponent *wifi_wificomponent;
ota::OTAComponent *ota_otacomponent;
api::APIServer *api_apiserver;
using namespace api;
using namespace output;
gpio::GPIOBinaryOutput *living_room_left_1;
gpio::GPIOBinaryOutput *living_room_left_2;
gpio::GPIOBinaryOutput *living_room_right_1;
gpio::GPIOBinaryOutput *living_room_right_2;
output::OutputSwitch *lr1;
output::OutputSwitch *lr2;
output::OutputSwitch *lr3;
output::OutputSwitch *lr4;
time_based::TimeBasedCover *lr_left;
time_based::TimeBasedCover *lr_right;
Automation<> *automation_3;
Automation<> *automation_6;
switch_::TurnOffAction<> *switch__turnoffaction;
switch_::TurnOffAction<> *switch__turnoffaction_3;
switch_::TurnOffAction<> *switch__turnoffaction_2;
switch_::TurnOffAction<> *switch__turnoffaction_4;
Automation<> *automation;
Automation<> *automation_4;
switch_::TurnOnAction<> *switch__turnonaction;
switch_::TurnOnAction<> *switch__turnonaction_3;
Automation<> *automation_2;
Automation<> *automation_5;
switch_::TurnOnAction<> *switch__turnonaction_2;
switch_::TurnOnAction<> *switch__turnonaction_4;
// ========== AUTO GENERATED INCLUDE BLOCK END ==========="

void setup() {
  // ===== DO NOT EDIT ANYTHING BELOW THIS LINE =====
  // ========== AUTO GENERATED CODE BEGIN ===========
  // async_tcp:
  // esphome:
  //   name: living_room_blinds
  //   platform: ESP8266
  //   board: nodemcuv2
  //   esp8266_restore_from_flash: true
  //   libraries: []
  //   build_path: living_room_blinds
  //   includes: []
  //   platformio_options: {}
  //   arduino_version: espressif8266@2.2.3
  //   board_flash_mode: dout
  App.pre_setup("living_room_blinds", __DATE__ ", " __TIME__);
  // switch:
  // cover:
  // logger:
  //   tx_buffer_size: 512
  //   level: DEBUG
  //   esp8266_store_log_strings_in_flash: true
  //   hardware_uart: UART0
  //   baud_rate: 115200
  //   id: logger_logger
  //   logs: {}
  logger_logger = new logger::Logger(115200, 512, logger::UART_SELECTION_UART0);
  logger_logger->pre_setup();
  App.register_component(logger_logger);
  // web_server_base:
  //   id: web_server_base_webserverbase
  web_server_base_webserverbase = new web_server_base::WebServerBase();
  App.register_component(web_server_base_webserverbase);
  // captive_portal:
  //   web_server_base_id: web_server_base_webserverbase
  //   id: captive_portal_captiveportal
  captive_portal_captiveportal = new captive_portal::CaptivePortal(web_server_base_webserverbase);
  App.register_component(captive_portal_captiveportal);
  // wifi:
  //   networks:
  //   - ssid: Pluth_IoT
  //     password: laYZKjEEYIb72SQ76@DwAyyjwp0a
  //     id: wifi_wifiap
  //     priority: 0.0
  //   manual_ip:
  //     static_ip: 192.168.40.80
  //     gateway: 192.168.40.1
  //     subnet: 255.255.255.0
  //     dns1: 192.168.40.1
  //     dns2: 8.8.8.8
  //   ap:
  //     ssid: Living Room Blinds
  //     password: QLzDrWsygVN1
  //     id: wifi_wifiap_2
  //     ap_timeout: 1min
  //   power_save_mode: NONE
  //   id: wifi_wificomponent
  //   output_power: 20.0
  //   domain: .local
  //   fast_connect: false
  //   reboot_timeout: 15min
  //   use_address: 192.168.40.80
  wifi_wificomponent = new wifi::WiFiComponent();
  wifi_wificomponent->set_use_address("192.168.40.80");
  wifi::WiFiAP wifi_wifiap = wifi::WiFiAP();
  wifi_wifiap.set_ssid("Pluth_IoT");
  wifi_wifiap.set_password("laYZKjEEYIb72SQ76@DwAyyjwp0a");
  wifi_wifiap.set_manual_ip(wifi::ManualIP{
      .static_ip = IPAddress(192, 168, 40, 80),
      .gateway = IPAddress(192, 168, 40, 1),
      .subnet = IPAddress(255, 255, 255, 0),
      .dns1 = IPAddress(192, 168, 40, 1),
      .dns2 = IPAddress(8, 8, 8, 8),
  });
  wifi_wifiap.set_priority(0.0f);
  wifi_wificomponent->add_sta(wifi_wifiap);
  wifi::WiFiAP wifi_wifiap_2 = wifi::WiFiAP();
  wifi_wifiap_2.set_ssid("Living Room Blinds");
  wifi_wifiap_2.set_password("QLzDrWsygVN1");
  wifi_wifiap_2.set_manual_ip(wifi::ManualIP{
      .static_ip = IPAddress(192, 168, 40, 80),
      .gateway = IPAddress(192, 168, 40, 1),
      .subnet = IPAddress(255, 255, 255, 0),
      .dns1 = IPAddress(192, 168, 40, 1),
      .dns2 = IPAddress(8, 8, 8, 8),
  });
  wifi_wificomponent->set_ap(wifi_wifiap_2);
  wifi_wificomponent->set_ap_timeout(60000);
  wifi_wificomponent->set_reboot_timeout(900000);
  wifi_wificomponent->set_power_save_mode(wifi::WIFI_POWER_SAVE_NONE);
  wifi_wificomponent->set_fast_connect(false);
  wifi_wificomponent->set_output_power(20.0f);
  App.register_component(wifi_wificomponent);
  // ota:
  //   id: ota_otacomponent
  //   safe_mode: true
  //   password: ''
  //   port: 8266
  ota_otacomponent = new ota::OTAComponent();
  ota_otacomponent->set_port(8266);
  ota_otacomponent->set_auth_password("");
  App.register_component(ota_otacomponent);
  ota_otacomponent->start_safe_mode();
  // api:
  //   id: api_apiserver
  //   reboot_timeout: 15min
  //   password: ''
  //   port: 6053
  api_apiserver = new api::APIServer();
  App.register_component(api_apiserver);
  api_apiserver->set_port(6053);
  api_apiserver->set_password("");
  api_apiserver->set_reboot_timeout(900000);
  // output:
  // output.gpio:
  //   platform: gpio
  //   id: living_room_left_1
  //   pin:
  //     number: 5
  //     inverted: false
  //     mode: OUTPUT
  living_room_left_1 = new gpio::GPIOBinaryOutput();
  // output.gpio:
  //   platform: gpio
  //   id: living_room_left_2
  //   pin:
  //     number: 4
  //     inverted: false
  //     mode: OUTPUT
  living_room_left_2 = new gpio::GPIOBinaryOutput();
  // output.gpio:
  //   platform: gpio
  //   id: living_room_right_1
  //   pin:
  //     number: 14
  //     inverted: false
  //     mode: OUTPUT
  living_room_right_1 = new gpio::GPIOBinaryOutput();
  // output.gpio:
  //   platform: gpio
  //   id: living_room_right_2
  //   pin:
  //     number: 12
  //     inverted: false
  //     mode: OUTPUT
  living_room_right_2 = new gpio::GPIOBinaryOutput();
  // switch.output:
  //   platform: output
  //   name: lr1
  //   output: living_room_left_1
  //   id: lr1
  lr1 = new output::OutputSwitch();
  App.register_component(lr1);
  // switch.output:
  //   platform: output
  //   name: lr2
  //   output: living_room_left_2
  //   id: lr2
  lr2 = new output::OutputSwitch();
  App.register_component(lr2);
  // switch.output:
  //   platform: output
  //   name: lr3
  //   output: living_room_right_1
  //   id: lr3
  lr3 = new output::OutputSwitch();
  App.register_component(lr3);
  // switch.output:
  //   platform: output
  //   name: lr4
  //   output: living_room_right_2
  //   id: lr4
  lr4 = new output::OutputSwitch();
  App.register_component(lr4);
  // cover.time_based:
  //   platform: time_based
  //   name: Living Room Left
  //   id: lr_left
  //   open_duration: 51s
  //   close_duration: 50s
  //   open_action:
  //     then:
  //     - switch.turn_on:
  //         id: lr1
  //       type_id: switch__turnonaction
  //     trigger_id: trigger
  //     automation_id: automation
  //   close_action:
  //     then:
  //     - switch.turn_on:
  //         id: lr2
  //       type_id: switch__turnonaction_2
  //     trigger_id: trigger_2
  //     automation_id: automation_2
  //   stop_action:
  //     then:
  //     - switch.turn_off:
  //         id: lr1
  //       type_id: switch__turnoffaction
  //     - switch.turn_off:
  //         id: lr2
  //       type_id: switch__turnoffaction_2
  //     trigger_id: trigger_3
  //     automation_id: automation_3
  //   has_built_in_endstop: false
  lr_left = new time_based::TimeBasedCover();
  App.register_component(lr_left);
  // cover.time_based:
  //   platform: time_based
  //   name: Living Room Right
  //   id: lr_right
  //   open_duration: 66s
  //   close_duration: 58s
  //   open_action:
  //     then:
  //     - switch.turn_on:
  //         id: lr3
  //       type_id: switch__turnonaction_3
  //     trigger_id: trigger_4
  //     automation_id: automation_4
  //   close_action:
  //     then:
  //     - switch.turn_on:
  //         id: lr4
  //       type_id: switch__turnonaction_4
  //     trigger_id: trigger_5
  //     automation_id: automation_5
  //   stop_action:
  //     then:
  //     - switch.turn_off:
  //         id: lr3
  //       type_id: switch__turnoffaction_3
  //     - switch.turn_off:
  //         id: lr4
  //       type_id: switch__turnoffaction_4
  //     trigger_id: trigger_6
  //     automation_id: automation_6
  //   has_built_in_endstop: false
  lr_right = new time_based::TimeBasedCover();
  App.register_component(lr_right);
  App.register_component(living_room_left_1);
  App.register_component(living_room_left_2);
  App.register_component(living_room_right_1);
  App.register_component(living_room_right_2);
  App.register_switch(lr1);
  lr1->set_name("lr1");
  App.register_switch(lr2);
  lr2->set_name("lr2");
  App.register_switch(lr3);
  lr3->set_name("lr3");
  App.register_switch(lr4);
  lr4->set_name("lr4");
  App.register_cover(lr_left);
  lr_left->set_name("Living Room Left");
  App.register_cover(lr_right);
  lr_right->set_name("Living Room Right");
  automation_3 = new Automation<>(lr_left->get_stop_trigger());
  automation_6 = new Automation<>(lr_right->get_stop_trigger());
  living_room_left_1->set_pin(new GPIOPin(5, OUTPUT, false));
  living_room_left_2->set_pin(new GPIOPin(4, OUTPUT, false));
  living_room_right_1->set_pin(new GPIOPin(14, OUTPUT, false));
  living_room_right_2->set_pin(new GPIOPin(12, OUTPUT, false));
  lr1->set_output(living_room_left_1);
  lr2->set_output(living_room_left_2);
  lr3->set_output(living_room_right_1);
  lr4->set_output(living_room_right_2);
  switch__turnoffaction = new switch_::TurnOffAction<>(lr1);
  switch__turnoffaction_3 = new switch_::TurnOffAction<>(lr3);
  switch__turnoffaction_2 = new switch_::TurnOffAction<>(lr2);
  switch__turnoffaction_4 = new switch_::TurnOffAction<>(lr4);
  automation_3->add_actions({switch__turnoffaction, switch__turnoffaction_2});
  automation_6->add_actions({switch__turnoffaction_3, switch__turnoffaction_4});
  lr_left->set_open_duration(51000);
  automation = new Automation<>(lr_left->get_open_trigger());
  lr_right->set_open_duration(66000);
  automation_4 = new Automation<>(lr_right->get_open_trigger());
  switch__turnonaction = new switch_::TurnOnAction<>(lr1);
  switch__turnonaction_3 = new switch_::TurnOnAction<>(lr3);
  automation->add_actions({switch__turnonaction});
  automation_4->add_actions({switch__turnonaction_3});
  lr_left->set_close_duration(50000);
  automation_2 = new Automation<>(lr_left->get_close_trigger());
  lr_right->set_close_duration(58000);
  automation_5 = new Automation<>(lr_right->get_close_trigger());
  switch__turnonaction_2 = new switch_::TurnOnAction<>(lr2);
  switch__turnonaction_4 = new switch_::TurnOnAction<>(lr4);
  automation_2->add_actions({switch__turnonaction_2});
  automation_5->add_actions({switch__turnonaction_4});
  lr_left->set_has_built_in_endstop(false);
  lr_right->set_has_built_in_endstop(false);
  // =========== AUTO GENERATED CODE END ============
  // ========= YOU CAN EDIT AFTER THIS LINE =========
  App.setup();
}

void loop() {
  App.loop();
}

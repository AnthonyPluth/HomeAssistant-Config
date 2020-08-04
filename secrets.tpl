{{ with secret "secret/HomeAssistant" }}
# alarm codes
alarm_code: {{ .Data.data.alarm_code }}
panic_code: {{ .Data.data.panic_code }}

# usernames
user_email: {{ .Data.data.user_email }}
user_default: {{ .Data.data.user_default }}
user_unifi: {{ .Data.data.user_unifi }}
user_foscam: {{ .Data.data.user_foscam }}

# passwords
pw_unifi: {{ .Data.data.pw_unifi }}
pw_ups: {{ .Data.data.pw_ups }}
pw_cbyge: {{ .Data.data.pw_cbyge }}
pw_foscam: {{ .Data.data.pw_foscam }}

# api keys
api_homegraph: {{ .Data.data.api_homegraph }}
api_octoprint: {{ .Data.data.api_octoprint }}

# ip addresses
ip_harmony: {{ .Data.data.ip_harmony }}
ip_unifi: {{ .Data.data.ip_unifi }}
ip_octoprint: {{ .Data.data.ip_octoprint }}
ip_living_room_camera: {{ .Data.data.ip_living_room_camera }}
ip_anthony_phone: {{ .Data.data.ip_anthony_phone }}
ip_sara_phone: {{ .Data.data.ip_sara_phone }}
ip_tplink_1: {{ .Data.data.ip_tplink_1 }}
ip_tplink_2: {{ .Data.data.ip_tplink_2 }}
ip_tplink_3: {{ .Data.data.ip_tplink_3 }}
ip_tplink_4: {{ .Data.data.ip_tplink_4 }}
ip_tplink_5: {{ .Data.data.ip_tplink_5 }}

# urls
url_google_assistant: {{ .Data.data.url_google_assistant }}
url_vera: {{ .Data.data.url_vera }}
url_master_bedroom_kiosk: {{ .Data.data.url_master_bedroom_kiosk }}
url_hallway_kiosk: {{ .Data.data.url_hallway_kiosk }}
url_basement_rtsp: {{ .Data.data.url_basement_rtsp }}
url_living_room_forward: {{ .Data.data.url_living_room_forward }}
url_living_room_back: {{ .Data.data.url_living_room_back }}
url_living_room_restart: {{ .Data.data.url_living_room_restart }}

# google stuff
google_pid: {{ .Data.data.google_pid }}
{{ end }}
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    02.sh                                              :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: smadnaik <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/06/05 02:43:38 by smadnaik          #+#    #+#              #
#    Updated: 2018/06/06 00:33:53 by smadnaik         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

sudo apt-get update -y >> /var/log/update_script.log >> daily_apt_update.sh
sudo mv daily_apt_update.sh /etc/cron.daily/
chmod 755 /etc/cron.daily/daily_apt_update.sh
crontab -e "* 4 * * 1 root /etc/cron.daily/daily_apt_update.sh" | crontab
crontab -l


#https://awc.com.my/uploadnew/5ffbd639c5e6eccea359cb1453a02bed_Setting%20Up%20Cron%20Job%20Using%20crontab.pdf

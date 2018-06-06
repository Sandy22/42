# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    04.sh                                              :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: smadnaik <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/06/05 23:09:19 by smadnaik          #+#    #+#              #
#    Updated: 2018/06/06 00:26:22 by smadnaik         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

MD5SUM = 'cat /root/crontabsum'
NEWSUM = 'md5sum /etc/crontab | cut -d " " -f 1'
if [ "$MD5SUM" != "$NEWSUM" ] then
	md5sum /etc/crontab | cut -d " " -f 1 > /etc/crontabsum
	mail -s "The crontab file was modified." root@localhost.com < /etc/crontab
fi


#mv 04.sh /etc/cron.daily
#chmod 755 /etc/cron.daily/04.sh
crontab -e "0 0 0 * 0-6 root /etc/cron.daily/04.sh" | crontab
crontab -l
